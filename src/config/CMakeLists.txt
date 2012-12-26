project(kio-cloud-config)
include(KDE4Defaults)
include(MacroLibrary)

file(GLOB KCM_KIO_CLOUD_SRCS "*.cpp")

kde4_add_plugin(kcm_kio_cloud ${KCM_KIO_CLOUD_SRCS})

target_link_libraries(kcm_kio_cloud ${KDE4_KDEUI_LIBS})

install(TARGETS kcm_kio_cloud
  DESTINATION ${PLUGIN_INSTALL_DIR}
)

install(FILES kcm_foo.desktop
  DESTINATION ${SERVICES_INSTALL_DIR}
)
