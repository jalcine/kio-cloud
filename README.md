kio-googledrive
===============

Provides a KIO client to the Google Drive file system.

## Foreword

__The following is from (jalcine)[http://jalcine.me]__

The idea came simply to me. I was eager to make a contribution to KDE and I had
a huge need of Google Drive integration with my file browser, that being Dolphin,
for easier file synchronization. Thus `kio-googledrive` was born.

## Implementation

The API to Google Drive is built within the plug-in, but consideration has been
made to remove it and allow it to grow, independent of this client.
