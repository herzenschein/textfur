# Required packages
find_package(Qt6 REQUIRED COMPONENTS Widgets Quick)

# If you're reading this, don't use this
file(GLOB SOURCEFILES *.cpp *.hpp)

# This takes care of AUTOMOC, AUTORCC and stuff
qt_standard_project_setup()

# Qt equivalent to add_executable
qt_add_executable(textfur ${SOURCEFILES})

# Make QML files importable
qt_add_qml_module(textfur
    URI Textfur
    VERSION 1.0
    # No need to import main.qml as it's the entrypoint
    QML_FILES TextRow.qml)

# Automatically create qrc:
qt_add_resources(textfur files
    PREFIX "/"
    # main is necessary to use in QQmlEngine::load()
    FILES main.qml ../textfurinterface.png)

# Specify target to compile against
target_link_libraries(textfur PRIVATE Qt6::Widgets Qt6::Quick)
