cmake_minimum_required(VERSION 3.5)

project(AudioPlayer LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Multimedia)

add_executable(AudioPlayer
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

target_link_libraries(AudioPlayer Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Multimedia)
