#include "JavaBridge.h"

#include <QDebug>
#include <QTime>

JavaBridge::JavaBridge()
    : mainClass(NULL), postMethodId(NULL)
{
    createJavaVM();
    initialize();
}

JavaBridge::~JavaBridge()
{
    destroyJavaVM();
}

void JavaBridge::createJavaVM()
{
    JavaVMInitArgs vm_args;

    JavaVMOption option1;
    option1.optionString = "-Djava.class.path=java/lib/main.jar:java/lib/hsqldb.jar:java/lib/antlr-3.2.jar:java/lib/jsontools-core-1.7.jar";

    JavaVMOption options[1];
    options[0] = option1;

    vm_args.version = JNI_VERSION_1_6;
    vm_args.options = options;
    vm_args.nOptions = 1;
    vm_args.ignoreUnrecognized = JNI_TRUE;

    /* load and initialize a Java VM, return a JNI interface
     * pointer in env */
    JNI_CreateJavaVM(&jvm, (void **) &env, &vm_args);
}

void JavaBridge::initialize()
{
    mainClass = env->FindClass("Main");
    //"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;"
    postMethodId = env->GetStaticMethodID(mainClass, "post", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");

    QTime time;
    qDebug("starting init call");
    time.start();
    jmethodID initMethodId = env->GetStaticMethodID(mainClass, "init", "()V");
    env->CallStaticVoidMethod(mainClass, initMethodId);
    qDebug() << "finished initializing the JavaBridge with time " << time.elapsed();
}

QString JavaBridge::post(const QString& actionName, const QString& jsonEncodedArguments, const QString& resultCallback, const QString& errorCallback)
{
    jstring actionNameJStr = env->NewString((const jchar*) actionName.data(), actionName.length());
    jstring jsonEncodedArgumentsJStr = env->NewString((const jchar*) jsonEncodedArguments.data(), jsonEncodedArguments.length());
    jstring resultCallbackJStr = env->NewString((const jchar*) resultCallback.data(), resultCallback.length());
    jstring errorCallbackJStr = env->NewString((const jchar*) errorCallback.data(), errorCallback.length());

    QTime time;
    time.start();
    jstring responseJString = (jstring) env->CallStaticObjectMethod(mainClass, postMethodId, actionNameJStr, jsonEncodedArgumentsJStr, resultCallbackJStr, errorCallbackJStr);

    QString responseQString;
    if (responseJString != NULL) {
        jboolean isCopy = false;
        const jchar* responseChars = env->GetStringChars(responseJString, &isCopy);
        responseQString = QString((const QChar *)(responseChars), env->GetStringLength(responseJString));
        env->ReleaseStringChars(responseJString, responseChars);
    }

    return responseQString;
}

void JavaBridge::destroyJavaVM()
{
    /* We are done. */
    jvm->DestroyJavaVM();
}
