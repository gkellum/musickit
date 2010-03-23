#include "SpoonCore.h"

SpoonCore::SpoonCore(QObject *parent) :
    QObject(parent), javaBridge(new JavaBridge())
{
}

const QString SpoonCore::post(const QString& actionName, const QString& jsonEncodedArguments, const QString& resultCallback, const QString& errorCallback)
{
    return javaBridge->post(actionName, jsonEncodedArguments, resultCallback, errorCallback);
}
