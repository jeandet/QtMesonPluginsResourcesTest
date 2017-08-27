TEMPLATE = lib

CONFIG += plugin

TARGET = plugin2

INCLUDEPATH = ../pluginInterface

RESOURCES = resources.qrc

HEADERS = plugin.h ../pluginInterface/plugin_if.h

SOURCES = plugin.cpp 
