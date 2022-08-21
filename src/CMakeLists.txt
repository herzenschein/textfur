set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Required packages
find_package(Qt6 REQUIRED COMPONENTS Quick)

include(${CMAKE_SOURCE_DIR}/cmake/Doxyqml.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/CPack.cmake)

# This takes care of AUTOMOC, AUTORCC and stuff
qt_standard_project_setup()

# Qt equivalent to add_executable
qt_add_executable(${PROJECT_NAME}
    main.cpp
)

set_source_files_properties("qml/Character.qml"
    PROPERTIES
    QT_QML_SINGLETON_TYPE ON
    QT_RESOURCE_ALIAS Character.qml
)

# Make QML files importable
qt_add_qml_module(${PROJECT_NAME}
    URI "Textfur"
    VERSION 1.0
    RESOURCE_PREFIX "/"
    RESOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../textfurinterface.png"
    QML_FILES
        "qml/main.qml"
        "qml/Character.qml"
        "qml/TextRow.qml"
)

target_link_libraries(textfur PRIVATE Qt::Quick Qt::Qml)

install(TARGETS textfur DESTINATION ${CMAKE_INSTALL_BINDIR})
