#include <KDebug>
#include <KComponentData>
#include "kio.hpp"

extern "C" int KDE_EXPORT kdemain( int argc, char **argv )
{
  kDebug(7000) << "Entering function";
  KComponentData instance( "kio_gdrive" );

  if (argc != 4)
  {
    fprintf( stderr, "Usage: kio_gdrive protocol domain-socket1 domain-socket2\n");
    exit( -1 );
  }

  KIO::GDrive::Client slave( argv[2], argv[3] );
  slave.dispatchLoop();
  return 0;
}
