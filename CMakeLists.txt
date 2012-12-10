project(kio-gdrive)

## Include KDE4's build system.
find_package(KDE4 REQUIRED)

add_subdirectory(src)

install(FILES gdrive.protocol DESTINATION ${SERVICES_INSTALL_DIR})
