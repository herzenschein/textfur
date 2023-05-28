set(CMAKE_INCLUDE_CURRENT_DIR ON)

qt_add_qml_module(textmanager
    URI "TextManager"
    VERSION 1.0
    RESOURCE_PREFIX "/"
    OUTPUT_DIRECTORY "TextManager"
    SOURCES
        "textmanager.cpp"
        "textmanager.hpp"
    STATIC
)
