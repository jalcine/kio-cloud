#include <KPluginFactory>
#include <KCModule>

namespace KIO {
  namespace Cloud {
      namespace Configuration {
        class Module : public KCModule {

        public:
            Module();
            virtual ~Module();
      };
    }
  }
}
