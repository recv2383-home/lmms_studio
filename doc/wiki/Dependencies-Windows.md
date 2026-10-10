## Background
 * Steps are provided for [Linux](#linux-cross-compile) and [Windows](#windows-msvc)

## Contents
 * [**Linux Cross-Compile**](#linux-cross-compile)
   * [**Ubuntu Cross-Compile**](#ubuntu-cross-compile)
<!--
   * [**Arch Cross-Compile**](#arch-cross-compile)
-->
 * [**Windows MSYS2**](#windows-msys2)
 * [**Windows MSVC**](#windows-msvc)
    * [Prerequisites](#prerequisites)
    * [Installing Dependencies](#installing-dependencies)
    * [Compile using Qt Creator](#compile-using-qt-creator)
    * [Compile using the command line](#compile-using-the-command-line)

<br><!-- End Section--><br>

## Linux Cross-Compile

Configure a `mingw-w64` cross-compilation environment for building Windows binaries in Linux.

### Ubuntu Cross-Compile
Ubuntu 24.04 (noble) is currently our only officially supported Ubuntu version for cross-compilation.

```bash
# add PPA with dependency libs
sudo sh -c 'echo "deb http://ppa.launchpad.net/tobydox/mingw-w64/ubuntu focal main" > /etc/apt/sources.list.d/tobydox-mingw-w64.list'
sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 72931B477E22FEFD47F8DECE02FE5F12ADDE29B2
sudo apt-get update -y

# add dependencies
sudo apt-get install \
git cmake nsis libxml-parser-perl liblist-moreutils-perl mingw-w64-tools \
gcc-mingw-w64-i686 gcc-mingw-w64-x86-64 g++-mingw-w64-i686 g++-mingw-w64-x86-64 \
sdl2-mingw-w64 libvorbis-mingw-w64 lame-mingw-w64 \
fluidsynth-mingw-w64 stk-mingw-w64 glib2-mingw-w64 portaudio-mingw-w64 \
libsndfile-mingw-w64 fftw-mingw-w64 flac-mingw-w64 fltk-mingw-w64 \
libgig-mingw-w64 libsamplerate-mingw-w64 libz-mingw-w64-dev \
binutils-mingw-w64 gcc-mingw-w64 libsoundio-mingw-w64 \
qt5base-mingw-w64 qt5svg-mingw-w64 qttools5-dev-tools

# configure to use POSIX MinGW libs
update-alternatives --set i686-w64-mingw32-gcc /usr/bin/i686-w64-mingw32-gcc-posix
update-alternatives --set i686-w64-mingw32-g++ /usr/bin/i686-w64-mingw32-g++-posix
update-alternatives --set x86_64-w64-mingw32-gcc /usr/bin/x86_64-w64-mingw32-gcc-posix
update-alternatives --set x86_64-w64-mingw32-g++ /usr/bin/x86_64-w64-mingw32-g++-posix
```

<!--
### Arch Cross Compile
```bash
yay -S \
mingw-w64-sdl2 mingw-w64-libvorbis mingw-w64-lame \
mingw-w64-fluidsynth mingw-w64-glib2 mingw-w64-portaudio \
mingw-w64-libsndfile mingw-w64-fftw mingw-w64-flac \
mingw-w64-fltk mingw-w64-libsamplerate \
mingw-w64-libsoundio mingw-w64-gcc mingw-w64-binutils \
nsis mingw-w64-tools
```
-->
### Build the app (64-bit example)
```bash
git clone https://github.com/lmms/lmms
cd lmms
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE="./cmake/toolchains/MinGW-W64-64.cmake"
cmake --build build
```

### Create a Windows NSIS installer
```bash
cmake --build build --target package
```

... see more compiling options [here](https://github.com/LMMS/lmms/wiki/Compiling#compiling).

## Windows MSYS2

This section covers compiling LMMS using [MSYS2](https://www.msys2.org/), which provides a simple, package-oriented solution to working with libraries and compiling Windows programs. The terminal, down to the MSYS' package manager, resembles the flow you'd experience with Arch-based Linux distros.

[mingw64-icon]: https://github.com/user-attachments/assets/42cfda16-72f3-4fec-b18b-d3ee635013c3 "mingw64"
[ucrt64-icon]: https://github.com/user-attachments/assets/9646e6e1-5673-4f8f-91d8-7c23f0301dee "ucrt"
[clang64-icon]: https://github.com/user-attachments/assets/d90c4db5-1213-459c-8575-6cf555aeada5 "clang64"
[clangarm64-icon]: https://github.com/user-attachments/assets/ba9065b1-5eb2-4b3c-bb28-5327f245b18e "clangarm64"
[msys-icon]: https://github.com/user-attachments/assets/6a094378-181e-4d9c-a8ae-dee0df8082df "msys"

> [!NOTE]
>  When compiling using MSYS2 or calling `pacboy`, **__make sure__** you are in either using the `MINGW64`, `UCRT64`, `CLANG64` or `CLANGARM64` terminal, do **NOT** compile from the MSYS terminal, since this is only for compatibility with Unix programs (runnable from the MSYS environment or from Cygwin).
>
> | ![mingw64-icon] MINGW64 | ![ucrt64-icon] UCRT64 | ![clang64-icon] CLANG64 | ![clangarm64-icon] CLANGARM64 | ![msys-icon] MSYS |
> |-----------------------|-----------------------|-----------------------|-----------------------|-----------------------|
> | :heavy_check_mark: OK | :heavy_check_mark: OK | :heavy_check_mark: OK | :heavy_check_mark: OK | 🚫 DO NOT USE         |


<details><summary>Potential issues with older PRs (click to expand)</summary>

Older PRs might be missing [the commit where Zyn has a new `windows.h` include preprocessor call](https://github.com/LMMS/lmms/commit/99ab0e20708b6598bd76058d838a7a3e58522894).

If you encounter an issue like this:

```
FAILED: plugins/ZynAddSubFx/zynaddsubfx/src/UI/CMakeFiles/zynaddsubfx_gui.dir/MasterUI.cxx.obj
...
 2378 |   masterwindow->icon((char *)LoadIcon(GetModuleHandle(NULL), "zynaddsubfx_icon"));
      |                                       ^~~~~~~~~~~~~~~
...
 2378 |   masterwindow->icon((char *)LoadIcon(GetModuleHandle(NULL), "zynaddsubfx_icon"));
      |                              ^~~~~~~~
...
```

... be sure to call `sed -i 's/#ifdef FLTK_GUI/#include <windows.h>\n#ifdef FLTK_GUI/' plugins/ZynAddSubFx/zynaddsubfx/src/UI/common.H` from the root directory of the LMMS project using MSYS2.

</details>

### Compiling

#### Standard building

```bash
pacman -Syu --noconfirm
# if the terminal closes, this is normal, just open it again

# install msys2 tools
pacman -S perl-List-MoreUtils perl-XML-Parser pactoys base-devel git --needed --noconfirm

# install mingw tools -- MUST be done from the correct environment -- see NOTE above
pacboy -S cmake:p cc:p libsndfile:p fluidsynth:p fltk:p fftw:p libsamplerate:p libgig:p \
SDL2:p stk:p qt5-base:p qt5-svg:p lv2:p lilv:p suil:p jack2:p nsis:p --needed --noconfirm

# clone the source code
git clone https://github.com/LMMS/lmms.git

cd lmms

cmake -B build

cmake --build build # -jNUMOFTHREADS
```

Optionally, if you want to copy all files required by LMMS into a single directory, you can use `cmake --install build --prefix "target"`.

#### Qt6
To compile against Qt6, replace `qt5-base:p qt5-svg:p` with `qt6-base:p qt6-svg:p` and set `-DWANT_QT6=ON`.

#### CLANGARM64

Packages `jack2` and `nsis` are not yet available for CLANGARM64 and can be safely omitted.  If you wish to package using CLANGARM64, the following workaround is required:

```bash
pacman -S mingw-w64-clang-x86_64-nsis

cmake -DCPACK_NSIS_EXECUTABLE=/clang64/bin/makensis.exe -B build
# ... then call `cmake --build --target package` as usual
```

### Create a Windows NSIS installer
```bash
cmake --build build --target package
```

## Windows MSVC
Warning, MSVC building is still experimental. Some plugins aren't available when compiling with MSVC.

Use the `master` branch, MSVC is not supported on `stable-1.2`.

```bat
git clone -b master https://github.com/LMMS/lmms.git --recurse-submodules
```

### Prerequisites

1. Install Visual Studio Community (if you don't already have it) from here: https://www.visualstudio.com/downloads/
    * Make sure to download the `Desktop Development with C++` tools. If you already have Visual Studio downloaded, you can 'modify' it with the Visual Studio Installer.
    * Alternatively, you can use Visual Studio build tools (which includes the compiler and the other stuff but without the ide).
2. Install Qt Open Source version from here: https://www.qt.io/download-qt-installer-oss.
    * Follow the installer and create a free account if you do not have one already.
    * When you get to the 'Select Components' stage, select version 5.15.x and just select 'MSVC 2019 64-bit' and 'MSVC 2019 32-bit'.
         * If you only want to build for 32-bit, you can just select the 32-bit option.
         * If you want to build for 64-bit, you need to also install the 32-bit package as well to support 32-bit VSTs.
    * Expand the 'Developer and Designer Tools' section and unselect 'CMake 64-bit' (we will install this manually in the next step) and 'Ninja' (this comes by default with Visual Studio). Only 'Qt Creator CDB Debugger Support' and 'Debugging Tools for Windows' should be left selected, along with the mandatory 'Qt Creator'.
3. Install CMake from here: https://cmake.org/download/
    * This is included in visual studio but we can't use the visual studio one. So we need to manually install it.
    * When prompted to add CMake to your `PATH`, [answer yes](https://github.com/LMMS/lmms/assets/6345473/dfd68aa3-8a62-4a01-be15-2dd791e2c780).
4. Install Git (if you don't already have it) from here: [https://git-scm.com/download/win](https://git-scm.com/download/win)

### Installing dependencies

1. Install Vcpkg at C:\
   ```bat
   cd C:\
   git clone https://github.com/Microsoft/vcpkg
   cd vcpkg
   .\bootstrap-vcpkg.bat
   ```
2. Install LMMS dependencies using Vcpkg
   ```
   .\vcpkg install --triplet=x64-windows fftw3 libsamplerate libsndfile lilv lv2 sdl2 fluidsynth fltk portaudio libstk vulkan
   ```
   Replace `x64-windows` with `x86-windows` if you want to build 32-bit version instead of 64-bit.

### Compile using Qt Creator

Skip to the [next section](#compile-using-the-command-line) if you want to use the command line instead.

1. Open up Qt Creator
2. Go to `Edit` -> `Preferences` -> `Kits`. Qt Creator should have detected your Qt installation automatically. We need to make adjustments to it so that CMake finds the libraries installed using Vcpkg. 

3. Go to `Cmake` -> `Vcpkg` and add your Vcpkg path to Qt. Click apply.
    * Depending on your Qt Creator version, you may need to manually enable the `Vcpkg` plugin to be able to see this tab. See [this page](https://doc.qt.io/qtcreator/creator-how-to-enable-plugins.html) for a guide.

![image](https://github.com/LMMS/lmms/assets/74815851/5ff4a46d-b05a-44a9-b25f-ebba58b0c712)

4. Exit the options and open `CMakeLists.txt` in the Qt creator window.

5. In the bottom left corner, choose your configuration and click build.

### Compile using the command line

Configure using CMake. Pass in `Visual Studio 17 2022` (or the version you have in your machine) as the build tool. Also pass in the path to Qt 5.15.2 MSVC 2019 64bit using `-DCMAKE_PREFIX_PATH` and installed Vcpkg toolchain file using `-DCMAKE_TOOLCHAIN_FILE=<path to vcpkg>/scripts/buildsystems/vcpkg.cmake`. Change paths accordingly. For 32 bit qt, we use another argument `-DQT_32_PREFIX=<path to qt install>/msvc2019`

```bat
cd lmms
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022" -DCMAKE_PREFIX_PATH=C:/Qt/5.15.2/msvc2019_64 -DQT_32_PREFIX=C:/Qt/5.15.2/msvc2019 -DCMAKE_TOOLCHAIN_FILE=C:/vcpkg/scripts/buildsystems/vcpkg.cmake
```

If you've built and installed qt5 in vcpkg, you don't need to specify CMAKE_PREFIX_PATH. CMake will find the version inside vcpkg

If configuring succeeded, compile using
```bat
cmake --build . --config "Release" 
:: or Debug if you want to build in debug mode
```
The building part is over but LMMS fails to run at this stage. You might get "qt5 dlls missing" errors. To fix that, you need to install LMMS using cmake. I am installing LMMS at `C:/lmms` for this tutorial.

```bat
cmake --install . --config Release --prefix=C:/lmms
```

If LMMS still gives a "dlls missing" error, or if you saw a "cannot analyze prerequisites" error in the previous two steps, you may need to switch to the VS Developer Command Prompt in Visual Studio 2022 to run the commands.

### Compile using MSVC IDE
If you completed the first cmake command in the section above, it will have also created lmms.sln in your build directory. 
 
By default when you generate an msvc solution file, cmake will be configured for release. This means the release version of the libraries in vcpkg will be used even if you choose debug in visual studio. You can use a utility like cmake-gui to change the build type from release to debug and then configure and generate again.

You can also use cmake-gui to create the initial solution file. When you configure for the first time, select your compiler and select the option: Select toolchain file for cross-compiling. The file you should be using is `<vcpkg-install-path>\scripts\buildsystems\vcpkg.cmake`

Alternately, Visual Studio should automatically detect that you are running a CMAKE project if you open the root LMMS folder. You will however need to set the QT path in `CMakeSettings.json`. This can easily be managed by right clicking on `CMakeSettings.json` and selecting `Edit CMake Settings`. Then scroll down to the `Qt5_DIR` variable and browser for the QT installation folder, then go into the version you have downloaded and navigate to `msvc2019_64/lib/cmake`. You will also need to set the CMake toolchain file to your vcpkg/cmake (i.e `C:/vcpkg/scripts/buildsystems/vcpkg.cmake`). This should automatically populate the rest of the environment variables regarding the locations for the libraries you downloaded through vcpkg, which can be found in the `packages` folder of wherever you installed vcpkg. If that doesn't work, you'll need to set the variables yourself, but its a bit of a pain, so try restarting VS. Click 'Show advanced variables' to ensure you always see the variables you need. Try and populate all the missing `_DIR` (root folder), `_INCLUDE_DIR` ('include' folder), and `_LIBRARY` (the .lib file in 'library'). When inputting paths, use `\` in the paths and not `/` (the 'browse' button seems to use `/` which don't seem to save/properly).

**Note:** Visual Studio can be very strange, and sometimes you may have to do some fudging around with saving the CMakeSettings.json file, cleaning, rebuilding, restarting visual studio etc to get lmms building…

When building, select the 'lmms.exe (Install)' option. It may complain about Perl being missing. If so, you can install Perl and set the appropriate environment variable.

If you have [WSL](https://docs.microsoft.com/en-us/windows/wsl/install-win10) installed, you can use the Linux commands instead.

**NOTE: You have to type `bash` into Command Prompt in order to use Linux commands.**

## Troubleshooting

&nbsp;&nbsp;&nbsp;...nothing here yet, want to [add something](dependencies-Windows/_edit)?