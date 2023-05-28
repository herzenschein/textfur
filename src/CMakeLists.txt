set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

include(${CMAKE_SOURCE_DIR}/cmake/Doxyqml.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/CPack.cmake)

qt_standard_project_setup()

qt_add_executable(${PROJECT_NAME})

set(QT_QML_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/qml)
qt_policy(SET QTP0001 NEW)

target_sources(${PROJECT_NAME} PRIVATE main.cpp)

target_precompile_headers(${PROJECT_NAME} PRIVATE
    <QGuiApplication>
    <QQmlApplicationEngine>
    <QIcon>
    <QObject>
    <QtQml>
)

qt_add_qml_module(${PROJECT_NAME}
    URI "Textfur"
    VERSION 1.0
    RESOURCE_PREFIX "/"
    RESOURCES "${CMAKE_SOURCE_DIR}/textfurinterface.png"
    QML_FILES
        "qml/main.qml"
        "qml/TextRow.qml"
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Quick
    Qt6::Qml
    characterplugin
    textmanagerplugin
)

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})

add_subdirectory(code)
