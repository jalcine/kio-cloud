project(KIOCloudCommon)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

file(GLOB KIO_CLOUD_COMMON_SRCS "*.cpp")
kde4_add_plugin(kio-cloud-common ${KIO_CLOUD_COMMON_SRCS})
target_link_libraries(kio-cloud-common ${KDE4_KIO_LIBS})
