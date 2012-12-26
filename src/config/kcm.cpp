#include "module.hpp"
#include "factory.hpp"
#include <KPluginFactory>

K_PLUGIN_FACTORY(kio_cloud, registerPlugin<KIO::Cloud::Configuration::Module>(); )
K_EXPORT_PLUGIN(KIO::Cloud::Configuration::Factory() )
