#include <KDebug>
#include "constants.hpp"
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
: SlaveBase( KIO_GDRIVE_PROTOCOL, pool, app ) {}



