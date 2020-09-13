// SPDX-License-Identifier: Apache-2.0
#include <QMainWindow>
#include <QWebChannel>
#include <QWebEngineView>
#include "DemoObject.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void loadStarted();

private:
    QWebEngineView *webEngineView;
    QWebChannel *webChannel;
    DemoObject *demoObject;
};
