#ifndef JAVABRIDGE_H
#define JAVABRIDGE_H

#include <QString.h>

#include <jni.h>

class JavaBridge
{
public:
    JavaBridge();
    ~JavaBridge();

    void initialize();

    QString post(const QString& actionName, const QString& jsonEncodedArguments, const QString& resultCallback, const QString& errorCallback);

    void test(int value);

private:
    void createJavaVM();
    void destroyJavaVM();

    JavaVM *jvm;       /* denotes a Java VM */
    JNIEnv *env;       /* pointer to native method interface */

    jclass mainClass;
    jmethodID postMethodId;
};

#endif // JAVABRIDGE_H
