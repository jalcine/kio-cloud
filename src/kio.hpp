#ifndef KIO_GDRIVE_H
#define KIO_GDRIVE_H

#include <kio/slavebase.h>

namespace KIO {
  namespace GDrive {
    class Client : public KIO::SlaveBase {
      public:
        /**
         * @constructor
         * Creates a new Client to the Google Drive system.
         *
         * @param pool
         * @param app
         */
        Client( const QByteArray &pool, const QByteArray &app );

        /**
         * @fn get
         * Obtains the necessary data from a specific data within
         * Google Drive.
         *
         * @param url
         */
        virtual void get( const KUrl &url );
    };
  }
}

#endif
