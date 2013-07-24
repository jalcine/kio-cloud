# KIO::Cloud - Cloud Storage

Merging cloud storage services under one roof on [KDE](http://kde.org) using 
[KIO](http://api.kde.org/4.x-api/kdelibs-apidocs/kio/html/index.html) 
technology.

## Abstract

I wrote this suite of slaves for KIO out of a necessity. I was a bit tired 
having to always sync files and even though we have clients that handle this, 
it'd be so much better if they were a part of the file system. Using FUSE 
would have been cross-platform but it would have required a bit more work and 
recycling of effort so I decided to go up on more level and leverage the 
desktop environment I used the most to handle the work for me. The enviroment 
manages my passwords on Web forms, in cross-application synchronization of 
authentication all thanks to KWallet so I figured why not?

## Usage
There's a few ways to open up KIO-powered paths. One is via the console and 
another is via a KIO-enabled application.

### Forming Paths

The path for services would be formed as follows:

`cloud://[storage-service-identifier]/path/as/found/on/service`

The `storage-service-identifer` can be found in each of the services supported 
in the `slaves` directory. The following is a list of the services to be
supported.

 + [Google Drive](https://drive.google.com) - googledrive
 + [DropBox](https://dropbox.com) - dropbox
 + [ownCloud](https://owncloud.org) - owncloud
 + [Ubuntu One](https://one.ubuntu.com) - ubuntuone

### Via Console
Running just `kioclient` would provide you with information on how to use 
`kioclient` in the console. Executing the opening of a PDF file on Google 
Drive would be done like so:

```bash
kioclient exec cloud://googledrive/Resume.pdf
```

### Via GUI
The act of browsing cloud files from a GUI has yet to be written. However, the
recommended GUI at the moment would be [Dolphin](http://dolphin.kde.org).

# License
This code is licensed under a GPL v2 license. See `LICENSE` for details.
