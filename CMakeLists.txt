cmake_minimum_required(VERSION 2.8)
project(kio-cloud)

# Just so people have an idea of what's included.
include(FeatureSummary)

## Include KDE4's build system.
find_package(KDE4 REQUIRED)
#find_package(QOAuth REQUIRED)

## Load up the sources.
add_subdirectory(src)
