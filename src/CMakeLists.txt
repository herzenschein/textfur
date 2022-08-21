set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

include(${CMAKE_SOURCE_DIR}/cmake/Doxyqml.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/CPack.cmake)

qt_standard_project_setup()

qt_add_executable(${PROJECT_NAME}
    main.cpp
)

set_source_files_properties("qml/Character.qml"
    PROPERTIES
    QT_QML_SINGLETON_TYPE ON
    QT_RESOURCE_ALIAS Character.qml
)

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

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Quick Qt6::Qml)

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
