option(WITH_GOOGLE_DRIVE "Incorporate Google Drive support." ON)
option(WITH_DROPBOX "Incorporate DropBox support." ON)

if (WITH_GOOGLE_DRIVE)
  add_subdirectory(googledrive)
endif(WITH_GOOGLE_DRIVE)

if (WITH_DROPBOX)
#add_subdirectory(dropbox)
endif(WITH_DROPBOX)