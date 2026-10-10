# Install script for directory: /home/ravic/Git/lmms/data/locale

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lmms/locale" TYPE FILE FILES
    "/home/ravic/Git/lmms/data/locale/ar.qm"
    "/home/ravic/Git/lmms/data/locale/bs.qm"
    "/home/ravic/Git/lmms/data/locale/ca.qm"
    "/home/ravic/Git/lmms/data/locale/cs.qm"
    "/home/ravic/Git/lmms/data/locale/de.qm"
    "/home/ravic/Git/lmms/data/locale/el.qm"
    "/home/ravic/Git/lmms/data/locale/en.qm"
    "/home/ravic/Git/lmms/data/locale/eo.qm"
    "/home/ravic/Git/lmms/data/locale/es.qm"
    "/home/ravic/Git/lmms/data/locale/eu.qm"
    "/home/ravic/Git/lmms/data/locale/fa.qm"
    "/home/ravic/Git/lmms/data/locale/fi.qm"
    "/home/ravic/Git/lmms/data/locale/fr.qm"
    "/home/ravic/Git/lmms/data/locale/gl.qm"
    "/home/ravic/Git/lmms/data/locale/he.qm"
    "/home/ravic/Git/lmms/data/locale/hi.qm"
    "/home/ravic/Git/lmms/data/locale/hu_HU.qm"
    "/home/ravic/Git/lmms/data/locale/id.qm"
    "/home/ravic/Git/lmms/data/locale/it.qm"
    "/home/ravic/Git/lmms/data/locale/ja.qm"
    "/home/ravic/Git/lmms/data/locale/ka.qm"
    "/home/ravic/Git/lmms/data/locale/ko.qm"
    "/home/ravic/Git/lmms/data/locale/lo.qm"
    "/home/ravic/Git/lmms/data/locale/ms_MY.qm"
    "/home/ravic/Git/lmms/data/locale/nb.qm"
    "/home/ravic/Git/lmms/data/locale/nl.qm"
    "/home/ravic/Git/lmms/data/locale/oc.qm"
    "/home/ravic/Git/lmms/data/locale/pl.qm"
    "/home/ravic/Git/lmms/data/locale/pt.qm"
    "/home/ravic/Git/lmms/data/locale/ro.qm"
    "/home/ravic/Git/lmms/data/locale/ru.qm"
    "/home/ravic/Git/lmms/data/locale/sl.qm"
    "/home/ravic/Git/lmms/data/locale/sr.qm"
    "/home/ravic/Git/lmms/data/locale/sv.qm"
    "/home/ravic/Git/lmms/data/locale/tl.qm"
    "/home/ravic/Git/lmms/data/locale/tr.qm"
    "/home/ravic/Git/lmms/data/locale/uk.qm"
    "/home/ravic/Git/lmms/data/locale/zh_CN.qm"
    "/home/ravic/Git/lmms/data/locale/zh_TW.qm"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/ravic/Git/lmms/build/data/locale/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
