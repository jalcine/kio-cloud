include_directories(${KDE4_INCLUDES} .)

set(kio_gdrive_PART_SRCS
   kio_gdrive.cpp)

kde4_add_plugin(kio_gdrive ${kio_gdrive_PART_SRCS})

target_link_libraries(kio_gdrive ${KDE4_KIO_LIBS})

install(TARGETS kio-gdrive  DESTINATION ${PLUGIN_INSTALL_DIR})
