/*
 *  kio-googledrive: Providing a native extension to Google Drive for Dolphin.
 *  Copyright (C) 2012  Jacky Alcine <jackyalcine@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef KIO_GOOGLEDRIVE_FILE_HPP
#define KIO_GOOGLEDRIVE_FILE_HPP

#include "resource.hpp"

namespace KIO {

namespace GoogleDrive {

class File : public KIO::GoogleDrive::Resource
{

public:
    explicit File(const KUrl& url, QObject* parent = 0);
    virtual ~File();
};

}

}

#endif // KIO_GOOGLEDRIVE_FILE_H
