cmake_minimum_required(VERSION 3.14)

project(qonsole LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

add_executable(qonsole
  main.cpp
  main.h
  gamestart.cpp
  gamestart.h
  furvars.h
  catquest.cpp
  catquest.h
  rabbitquest.cpp
  rabbitquest.h
  otterquest.cpp
  otterquest.h
  lizardquest.cpp
  lizardquest.h
  changelog.cpp
  changelog.h
  encounters.cpp
  encounters.h
  friends.cpp
  friends.h
  athome.cpp
  athome.h
  comfort.cpp
  comfort.h
  endgame.cpp
  endgame.h
  explorerandom.cpp
  explorerandom.h


)
target_link_libraries(qonsole Qt${QT_VERSION_MAJOR}::Core)
