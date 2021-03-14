cmake_minimum_required(VERSION 3.14)

project(textfur LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets Core REQUIRED)

add_executable(textfur
  main.cpp
  main.h
  interface.cpp
  interface.h
#  animalquest.cpp
#  animalquest.h
  gamestart.cpp
  gamestart.h
  furvars.cpp
  furvars.h
#  catquest.cpp
#  catquest.h
#  rabbitquest.cpp
#  rabbitquest.h
#  otterquest.cpp
#  otterquest.h
#  lizardquest.cpp
#  lizardquest.h
  changelog.cpp
  changelog.h
#  encounters.cpp
#  encounters.h
#  friends.cpp
#  friends.h
  athome.cpp
  athome.h
  comfort.cpp
  comfort.h
#  endgame.cpp
#  endgame.h
#  explorerandom.cpp
#  explorerandom.h
#  qstringcout.cpp
#  qstringcout.h


)
target_link_libraries(textfur Qt6::Core Qt6::Widgets)
