set(DESCRIPTION "TextFur is a textgame that was originally written in Mono C# in 2017 and recently ported to C++/Qt in 2021.
This game has served as a means for me to learn how to code, especially with respect to C++/Qt.")
set(HOMEPAGE_URL "https://github.com/herzenschein/textfur")

message(-----------------------------------------------------------------------------------------------------------------)
message(${DESCRIPTION} \n "You can access it over: " ${HOMEPAGE_URL})
message("The \"default\" preset builds with CMAKE_CXX_STANDARD=20, CMAKE_GENERATOR=Ninja and CMAKE_BUILD_TYPE=MinSizeRel.")
message("It also generates a compile_commands.json and a .kateproject file.")
message("You can build with: cmake -B build --preset default")
message(-----------------------------------------------------------------------------------------------------------------\n)

cmake_minimum_required(VERSION 3.20)

# Required for QtObject
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

project(textfur)

add_subdirectory(src)
