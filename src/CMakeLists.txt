find_package(Qt6 REQUIRED COMPONENTS Widgets Quick)

file(GLOB SOURCEFILES *.cpp *.hpp)

qt_add_executable(textfur ${SOURCEFILES})

qt_add_qml_module(textfur
    URI text.game.textfur
    VERSION 1.0
    QML_FILES main.qml)

target_link_libraries(textfur PRIVATE Qt6::Widgets Qt6::Quick)
