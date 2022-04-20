set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

file(GLOB SOURCEFILES *.cpp *.h *.hpp)

add_executable(textfur ${SOURCEFILES} )
target_link_libraries(textfur Qt6::Widgets)
