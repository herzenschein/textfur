find_package(Doxygen)

option(BUILD_DOXYGEN_HTML "Enable Doxygen HTML files" ${Doxygen_FOUND})

if(BUILD_DOXYGEN_HTML)
    set(DOXYGEN_WARN_IF_UNDOCUMENTED NO)
    set(DOXYGEN_QUIET YES)
    set(DOXYGEN_GENERATE_HTML YES)
    set(DOXYGEN_GENERATE_TREEVIEW NO)

    set(DOXYGEN_FILTER_PATTERNS *.qml=doxyqml)
    set(DOXYGEN_FILE_PATTERNS *.qml)
    set(DOXYGEN_EXTENSION_MAPPING qml=C++)

    doxygen_add_docs(doxtextfur ALL)
    install(DIRECTORY ${CMAKE_BINARY_DIR}/src/html/ DESTINATION ${CMAKE_INSTALL_DOCDIR})
endif()
