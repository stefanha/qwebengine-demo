QWebEngine + QWebChannel demo
=============================
This project shows how to expose a QObject to JavaScript running in a
QWebEngine browser environment. The HTML page can invoke a method on the
QObject and receives a callback when a Qt signal is emitted.

The program's main() function displays a QMainWindow-derived window that
contains a QWebEngineView. The web engine loads the index.html page that is
embedded inside the executable using Qt's resource system.

DemoObject is a QObject that offers a startTimer() method and emits a
timerExpired() signal when the timer fires. This object is exposed to
index.html via QWebChannel and JavaScript can access it via
channel.objects.demo.

Build and run
---
The following commands build the program. Make sure that Qt 5 and the meson
build system are installed:

```shell
$ meson setup build
$ meson compile -C build
$ build/demo
```

Licensed under the Apache License 2.0:
https://spdx.org/licenses/Apache-2.0
