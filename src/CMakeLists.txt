set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

file(GLOB SOURCEFILES *.cpp *.h *.hpp)

add_executable(textfur ${SOURCEFILES} )
target_link_libraries(textfur Qt6::Widgets)
