cmake_minimum_required(VERSION 3.14)

project(textfur LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(textfur
  main.cpp
  interface.cpp
  interface.h
  gamestart.cpp
  gamestart.h
  furvars.cpp
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
  explorerandom.cpp
  explorerandom.h


)
target_link_libraries(textfur Qt6::Widgets)
