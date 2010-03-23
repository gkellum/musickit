#ifndef SPOONCORE_H
#define SPOONCORE_H

#include "JavaBridge.h"

#include <QObject>

#include <tr1/memory>

class SpoonCore : public QObject
{
Q_OBJECT
public:
    explicit SpoonCore(QObject *parent = 0);

signals:

public slots:
    const QString post(const QString& actionName, const QString& jsonEncodedArguments, const QString& resultCallback, const QString& errorCallback);

private:
    std::tr1::shared_ptr<JavaBridge> javaBridge;
};

#endif // SPOONCORE_H
