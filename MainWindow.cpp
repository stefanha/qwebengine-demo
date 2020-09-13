// SPDX-License-Identifier: Apache-2.0
#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Demo"));
    resize(800, 600);

    demoObject = new DemoObject(this);

    // JavaScript can access demoObject via channel.objects.demo
    webChannel = new QWebChannel(this);
    webChannel->registerObject("demo", demoObject);

    webEngineView = new QWebEngineView;
    connect(webEngineView, &QWebEngineView::loadStarted,
            this, &MainWindow::loadStarted);
    webEngineView->load(QUrl("qrc:/index.html"));
    webEngineView->show();
    setCentralWidget(webEngineView);
}

void MainWindow::loadStarted()
{
    // Set up the web channel so the page can access Qt objects
    webEngineView->page()->setWebChannel(webChannel);
}
