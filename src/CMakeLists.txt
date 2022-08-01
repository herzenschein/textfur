find_package(Qt6 REQUIRED COMPONENTS Widgets Quick)

file(GLOB SOURCEFILES *.cpp *.hpp)

qt_standard_project_setup()

qt_add_executable(textfur ${SOURCEFILES})

qt_add_qml_module(textfur
    URI org.text.fur
    VERSION 1.0
    QML_FILES main.qml)

qt_add_resources(textfur qmlfiles
    PREFIX "/"
    FILES main.qml)

target_link_libraries(textfur PRIVATE Qt6::Widgets Qt6::Quick)
