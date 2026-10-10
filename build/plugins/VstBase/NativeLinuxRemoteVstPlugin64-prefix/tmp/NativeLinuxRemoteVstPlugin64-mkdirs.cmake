# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/home/ravic/Git/lmms/plugins/VstBase/RemoteVstPlugin")
  file(MAKE_DIRECTORY "/home/ravic/Git/lmms/plugins/VstBase/RemoteVstPlugin")
endif()
file(MAKE_DIRECTORY
  "/home/ravic/Git/lmms/build/plugins/VstBase/NativeLinuxRemoteVstPlugin64-prefix/src/NativeLinuxRemoteVstPlugin64-build"
  "/home/ravic/Git/lmms/build/plugins/VstBase/NativeLinuxRemoteVstPlugin64-prefix"
  "/home/ravic/Git/lmms/build/plugins/VstBase/NativeLinuxRemoteVstPlugin64-prefix/tmp"
  "/home/ravic/Git/lmms/build/plugins/VstBase/NativeLinuxRemoteVstPlugin64-prefix/src/NativeLinuxRemoteVstPlugin64-stamp"
  "/home/ravic/Git/lmms/build/plugins/VstBase/NativeLinuxRemoteVstPlugin64-prefix/src"
  "/home/ravic/Git/lmms/build/plugins/VstBase/NativeLinuxRemoteVstPlugin64-prefix/src/NativeLinuxRemoteVstPlugin64-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/ravic/Git/lmms/build/plugins/VstBase/NativeLinuxRemoteVstPlugin64-prefix/src/NativeLinuxRemoteVstPlugin64-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/ravic/Git/lmms/build/plugins/VstBase/NativeLinuxRemoteVstPlugin64-prefix/src/NativeLinuxRemoteVstPlugin64-stamp${cfgdir}") # cfgdir has leading slash
endif()
