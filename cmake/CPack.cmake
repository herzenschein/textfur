find_program(RPMBUILD rpmbuild)

if(RPMBUILD)
    message(STATUS "Found rpmbuild: ${RPMBUILD}")
    set(RPMBUILD_FOUND ON)
endif()

option(BUILD_RPM "Enable RPM package target" ${RPMBUILD_FOUND})

if(RPMBUILD_FOUND)
    set(CPACK_GENERATOR RPM)
    include(CPack)
endif()
