project(kio_cloud_googledrive)

file(GLOB KIO_CLOUD_GOOGLEDRIVE_SRCS "*.cpp")
file(GLOB KIO_CLOUD_GOOGLEDRIVE_HDRS "*.hpp")

kde4_add_plugin(kio_gdrv ${KIO_CLOUD_GOOGLEDRIVE_SRCS})

target_link_libraries(kio_gdrv ${KIO_CLOUD_LIBS})

install(TARGETS kio_gdrv
        DESTINATION ${PLUGIN_INSTALL_DIR})

install(FILES "${CMAKE_SOURCE_DIR}/data/gdrv.protocol"
        DESTINATION ${SERVICES_INSTALL_DIR})
