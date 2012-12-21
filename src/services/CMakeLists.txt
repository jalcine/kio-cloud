option(WITH_GOOGLE_DRIVE ON "Incorporate Google Drive support.")
#option(WITH_DROPBOX ON "Incorporate DropBox support.")

if (WITH_GOOGLE_DRIVE)
  add_subdirectory(google_drive)
endif(WITH_GOOGLE_DRIVE)

if (WITH_DROPBOX)
 add_subdirectory(dropbox)
endif(WITH_DROPBOX)
