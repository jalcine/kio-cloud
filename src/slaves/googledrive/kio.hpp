#ifndef KIO_GDRIVE_H
#define KIO_GDRIVE_H

#include <kio/slavebase.h>

namespace KIO {
  namespace GDrive {
    class Client : public KIO::SlaveBase {
      public:
        Client( const QByteArray &pool, const QByteArray &app );
	virtual ~Client();
        virtual void get( const KUrl &url );
	virtual void read ( KIO::filesize_t size );
	virtual void write ( const QByteArray &data );
	virtual void seek(KIO::filesize_t offset);
	virtual void close();
	virtual void copy(const KUrl& src, const KUrl& dest, int permissions, JobFlags flags);
	virtual void del(const KUrl& url, bool isfile);
	virtual void put(const KUrl& url, int permissions, JobFlags flags);
	virtual void mimetype(const KUrl& url);
	virtual void mkdir(const KUrl& url, int permissions);
	virtual void listDir(const KUrl& url);
	virtual void rename(const KUrl& src, const KUrl& dest, JobFlags flags);
    };
  }
}

#endif
