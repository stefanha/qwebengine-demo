// SPDX-License-Identifier: Apache-2.0
#include "DemoObject.h"

DemoObject::DemoObject(QObject *parent)
    : QObject(parent)
{
    timer = new QTimer(this);
    timer->setSingleShot(true);
    connect(timer, &QTimer::timeout,
            this, &DemoObject::timerExpired);
}

void DemoObject::startTimer(int nsecs)
{
    timer->start(nsecs * 1000 /* ms */);
}
