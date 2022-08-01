find_package(Qt6 REQUIRED COMPONENTS Widgets Quick)

file(GLOB SOURCEFILES *.cpp *.hpp)

# This takes care of AUTOMOC, AUTORCC and stuff
qt_standard_project_setup()

# Qt equivalent to add_executable
qt_add_executable(textfur ${SOURCEFILES})

# Make QML files importable
qt_add_qml_module(textfur
    URI org.text.fur
    VERSION 1.0
    QML_FILES main.qml)

# Automatically create qrc:
qt_add_resources(textfur qmlfiles
    PREFIX "/"
    FILES main.qml)

target_link_libraries(textfur PRIVATE Qt6::Widgets Qt6::Quick)
