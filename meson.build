# SPDX-License-Identifier: Apache-2.0
project('demo', 'cpp')

qt5 = import('qt5')
qt5_dep = dependency('qt5', modules: ['Widgets', 'WebEngineWidgets'])

processed = qt5.preprocess(
  moc_headers : ['MainWindow.h', 'DemoObject.h'],
  qresources : 'resources.qrc',
)

exe = executable('demo',
  sources : ['main.cpp', 'MainWindow.cpp', 'DemoObject.cpp', processed],
  dependencies : qt5_dep)
