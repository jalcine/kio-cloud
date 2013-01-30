#include <KDebug>
#include "kio.hpp"

using namespace KIO::GDrive;

void Client::get( const KUrl &url )
{
  Q_UNUSED(url)
  // @todo Query GDrive to know if the files are there.
  // @todo If it doesn't exist, return with a EOF.
  mimeType( "text/plain" );
  QByteArray str( "Hello_world" );
  data(str);
  finished();
  kDebug(7000) << "Leaving function";
}

Client::Client( const QByteArray &pool, const QByteArray &app )
: SlaveBase( "gdrv" , pool, app ) {}

void Client::close()
{
    KIO::SlaveBase::close();
}

void Client::copy(const KUrl& src, const KUrl& dest, int permissions, KIO::JobFlags flags)
{
    KIO::SlaveBase::copy(src, dest, permissions, flags);
}

void Client::del(const KUrl& url, bool isfile)
{
    KIO::SlaveBase::del(url, isfile);
}

void Client::listDir(const KUrl& url)
{
    KIO::SlaveBase::listDir(url);
}

void Client::mimetype(const KUrl& url)
{
    KIO::SlaveBase::mimetype(url);
}

void Client::mkdir(const KUrl& url, int permissions)
{
    KIO::SlaveBase::mkdir(url, permissions);
}

void Client::put(const KUrl& url, int permissions, KIO::JobFlags flags)
{
    KIO::SlaveBase::put(url, permissions, flags);
}
void Client::read(KIO::filesize_t size)
{
    KIO::SlaveBase::read(size);
}

void Client::rename(const KUrl& src, const KUrl& dest, KIO::JobFlags flags)
{
    KIO::SlaveBase::rename(src, dest, flags);
}

void Client::seek(KIO::filesize_t offset)
{
    KIO::SlaveBase::seek(offset);
}

void Client::write(const QByteArray& data)
{
    KIO::SlaveBase::write(data);
}

Client::~Client()
{

}