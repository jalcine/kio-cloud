project(kio_cloud_googledrive)

find_package(LibKGAPI REQUIRED)

file(GLOB KIO_CLOUD_GOOGLEDRIVE_SRCS "*.cpp")
file(GLOB KIO_CLOUD_GOOGLEDRIVE_HDRS "*.hpp")

kde4_add_plugin(kio_gdrv ${KIO_CLOUD_GOOGLEDRIVE_SRCS})
include_directories(BEFORE ${KDE4_INCLUDES})
include_directories(BEFORE ${LibKGAPI_INCLUDE_DIR})

target_link_libraries(kio_gdrv ${KDE4_KIO_LIBS})

set_target_properties(kio_gdrv PROPERTIES
  COMPILE_FLAGS "--std=c++11")

install(TARGETS kio_gdrv
        DESTINATION ${PLUGIN_INSTALL_DIR})
