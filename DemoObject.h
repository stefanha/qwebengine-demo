// SPDX-License-Identifier: Apache-2.0
#include <QTimer>

// This object is exported to JavaScript and offers a timer API
class DemoObject : public QObject
{
    Q_OBJECT

public:
    DemoObject(QObject *parent = nullptr);

    // Q_INVOKABLE marks this function as callable from JavaScript
    Q_INVOKABLE void startTimer(int nsecs);

signals:
    // Emitted when the timer expires
    void timerExpired();

private:
    QTimer *timer;
};
