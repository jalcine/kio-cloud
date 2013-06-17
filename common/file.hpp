/*
 * kio-cloud-common: Implementing the common services for KIO::Cloud.
 * Copyright (C) 2013  Jacky Alcine <me@jalcine.me>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
#ifndef KIO_CLOUD_COMMON_FILE
#define KIO_CLOUD_COMMON_FILE

#include <QObject>

namespace KIO {
  namespace Cloud {
    namespace Common {

      /**
       * @class KIO::Cloud::Common::File
       * @brief Abstracts files shared over cloud storage protocols.
       * 
       * The File object represents the foundational aspect of all objects in the
       * cloud storage. This abstraction allows for individuals to easily move files
       * between storage protocols, in turn blurring the line of the protocol.
       */
      class File : public QObject {
        Q_OBJECT
        Q_PROPERTY(int Size READ size)
        Q_PROPERTY(QString Name READ name WRITE setName)

      public:
        File();
        virtual ~File();
        int size() const;
        QString name() const;
        void setName(QString const newName);
      };
    }
  }
}

#endif /* KIO_CLOUD_COMMON_FILE */