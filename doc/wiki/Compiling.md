## Contents
* [Dependencies](#dependencies)
   * [Dependencies Quickstart](#dependencies-quickstart)
   * [Advanced - The Build Toolchain](#build-toolchain)
   * [Advanced - The Compiler](#compiler)
   * [Advanced - The Libraries](#libraries)
* [Clone Source Code](#clone-source-code)
* [Build Environment](#build-environment)
   * [CMake Quickstart](#cmake-quickstart)
   * [Advanced - Build Options](#build-options)
* [Compiling](#compiling)
* [Debugging](#debugging)
* [Packaging](#packaging)

<br><!-- End Section --><br>

## Dependencies

The following packages are required for building.  Since most desktops offer these libraries through package repositories, we recommend using the [Dependency Quickstart](#dependencies-quickstart) for most purposes.
In case you are using windows for building lmms, where package managers do not really exist, we recommend using [vcpkg](https://vcpkg.io/en/index.html)

If you get stuck, please ask in the `#support` channel on [Discord](https://lmms.io/chat).

If a package is not available for your platform, you may need to [manually install](#dependencies-detailed).

### Dependencies Quickstart
Recommended.  Each platform requires a [compiler](#compiler) and several [libraries](#libraries).  We've selected the most common settings for you.

Qt 5.15+ is required on the `master` branch. If you're using Linux and your distribution only ships older Qt versions, install Qt using the official installer at https://www.qt.io/download-open-source.

* [Ubuntu | Mint](dependencies-ubuntu)
* [Debian](dependencies-debian)
* [Fedora](dependencies-fedora)
* [openSUSE](dependencies-opensuse)
* [Arch | Manjaro](dependencies-arch)
* [macOS](dependencies-macos)
* [Windows](dependencies-windows)
   * [Cross-compile on Linux using MinGW](dependencies-windows#linux-cross-compile)
   * [Compile using MSYS2](dependencies-windows#windows-msys2)
   * [Compile using MSVC](dependencies-windows#windows-msvc)
<!--
   * [Compile using MSYS2 and MinGW](dependencies-windows#msys)
-->
* [OpenBSD](Dependencies-OpenBSD)

A platform is missing?  Add it [like this](dependencies-foobar).

### Dependencies Detailed
Alternately, you may download and compile each dependency manually.  This is recommended for advanced users only.

#### Build Toolchain
| Supported | Toolchain | Version | Branch | 
|-----------|-----------|---------|-------| 
| ✔️ | [`cmake`](https://cmake.org/) | [`3.13.0`](../blob/master/CMakeLists.txt#L1) |  [`master`](../tree/master) |
| ✔️ | [`cmake`](https://cmake.org/) | [`2.8.7`](../blob/stable-1.2/CMakeLists.txt#L1) | [`stable-1.2`](../tree/stable-1.2) |
| ✔️ | [`cmake`](https://cmake.org/) | [`2.4.5`](../blob/stable-1.1/CMakeLists.txt#L1) | [`stable-1.1`](../tree/stable-1.1) |

#### Compiler
| Supported | Compiler |
|-----------|----------|
| ✔️ | [`gcc/g++`](https://gcc.gnu.org/) |
| ✔️ | [`clang`](https://clang.llvm.org/) |
| ✔️ | [`mingw-w64`](https://sourceforge.net/projects/mingw-w64/) |
| ✔️ | [`msvc++`](https://visualstudio.com/vs/cplusplus/) |
<!--
| ✔️ | [`msys2`](https://www.msys2.org/) |
-->

#### Libraries

| Required | Library | Version | Description | 
|----------|---------|---------|-------------|
| ✔️ | [`Qt5`](http://qt.io) | `>=5.15` on `master`, `>=5.0` on `stable-1.2` | Widget toolkit for creating cross-platform graphical user interfaces |
| ✔️ | [`libsndfile`](http://www.mega-nerd.com/libsndfile/) | `>=1.0.11` | Reading and writing sound files, `>=1.0.18` for [`lmms>=master`](../tree/master)(`>=1.0.26` for FLAC compression level setting for `lmms>=master` and `>=1.1.0` for MP3 audio import for `lmms>=master`) |
| ✔️ | [`fftw3`](http://www.fftw.org/) | | Fast fourier transform computing library |
| ✔️ | [`libsamplerate`](http://www.mega-nerd.com/SRC/) | `>=0.1.7` | Audio sample rate converter |
|   | [`libvorbis`](http://xiph.org/vorbis/) | | Audio encoding library |
|   | [`libogg`](http://xiph.org/ogg/) | | Multimedia container format |
|   | [`wine`](http://www.winehq.org/) | | Windows-on-Unix (needed for VST support) |
|   | [`libstk`](http://ccrma.stanford.edu/software/stk/) | | Signal processing and algorithmic synthesis library |
|   | [`libfluidsynth`](http://fluidsynth.sourceforge.net/) | | SoundFont synthesis library |
|   | [`fltk`](http://www.fltk.org/) |  | Lightweight GUI library (needed by ZynAddSubFX) |
|   | [`jack`](http://jackaudio.org/)|  | Software and hardware audio routing |
|   | [`sdl2`](http://www.libsdl.org/)|  | Audio interface library* |
|   | [`alsa`](http://www.alsa-project.org/) |  | Audio interface library* |
|   | [`libportaudio`](http://www.portaudio.com/)|  | Audio interface library* | 
|   | [`libsoundio`](http://libsound.io/)|  | Audio interface library* |
|   | [`perl`](https://www.perl.org/)|  | For compiling the `swh` LADSPA plugins |
|   | [`perl`&nbsp;`XML::Parser`](https://metacpan.org/pod/XML::Parser) |  | For compiling the `swh` LADSPA plugins |

   > \*One or more required for audio playback

<br><!-- End Section --><br>

## Clone Source Code
Before preparing the build environment, you must have a [`branch`](../branches) copy of the source code*.
```bash
# clone the "master" branch (e.g. "stable-1.2", etc)
git clone --recurse-submodules -b master https://github.com/lmms/lmms
```
   > \* Advanced users may prefer to download a tarball instead: [zip](https://github.com/LMMS/lmms/archive/master.tar.gz) | [tarball](https://github.com/LMMS/lmms/archive/master.tar.gz)

For most users, this will create a folder `~/lmms` which can be used for building.  If you're already using `~/lmms` for samples you'll see `path 'lmms' already exists`, use an alternate location e.g. `~/Desktop` and try again.

&nbsp;&nbsp;&nbsp; ... want to switch branches or fast-forward?  See [[Accessing git repository]].

<br><!-- End Section --><br>

## Build Environment
The [`cmake` toolchain](#build-toolchain) offers several [built-in configuration options](https://cmake.org/cmake/help/v3.0/manual/cmake-variables.7.html).  In addition, LMMS adds several options useful for building.  Below are a list of the most standard options.  We recommend using the [CMake Quickstart](#cmake-quickstart) for most purposes.

### CMake Quickstart
Assumes you've already [installed dependencies](#dependencies-quickstart) and [cloned the source code](#clone-source-code)
1. Prepare `build` and, optionally, the `target` directories
   ```bash
   cd lmms
   mkdir build
   cd build
   ```

2. And then choose one of the following...

   #### Running CMake
   ```bash
   # from "lmms/build" directory
   cmake .. -DCMAKE_INSTALL_PREFIX=../target/
   ```

   **Notes:**
   - In case you want to build LMMS <= `stable-1.2` with Qt5, see [Using Qt5](#using-qt5-obsolete).
   - On MacOS, adding `-DCMAKE_PREFIX_PATH="$(brew --prefix qt5)"` to the end of the cmake command will point CMake to Qt5.
   - If CMake complains about not being able to find `wine`, add `-DCMAKE_PREFIX_PATH=/usr/lib/wine` to the end of the cmake command.

### Build Options
| Option* | Description | Common Values |
|--------|-------------|-------|
| [`CMAKE_INSTALL_PREFIX`](https://cmake.org/cmake/help/v3.0/variable/CMAKE_INSTALL_PREFIX.html) | Install to non-standard (non-root) location.  This is generally preferred, especially for coding, testing and packaging. | `../target` |
| [`CMAKE_PREFIX_PATH`](https://cmake.org/cmake/help/v3.0/variable/CMAKE_PREFIX_PATH.html?highlight=cmake_prefix_path) | Set your Qt5 (probably other library too) installation path if it does not reside in standard installation paths | `/path/to/qt5` |
| [`CMAKE_BUILD_TYPE`](https://cmake.org/cmake/help/v3.0/variable/CMAKE_BUILD_TYPE.html) | Force build to include debugging or optimization symbols | `Release`, `Debug`, `RelWithDebInfo` |
| [`CMAKE_CXX_COMPILER_LAUNCHER`](https://cmake.org/cmake/help/latest/envvar/CMAKE_LANG_COMPILER_LAUNCHER.html) | A compiler launcher can be used to (significantly) speed up subsequent builds, e.g. [ccache](https://ccache.dev/). | `ccache` |
| [`FORCE_VERSION`](../blob/master/cmake/modules/VersionInfo.cmake) | Force version within software, useful for distributing one-off packages | `internal`, `1.2.3-myfix` |
| [`PLUGIN_LIST`](../blob/master/plugins/CMakeLists.txt) | Limit build only to the specified [`/plugins/`](../blob/master/plugins/), used to reduce compile time, such as when [bisecting](https://git-scm.com/docs/git-bisect) | `"AudioFileProcessor Kicker TripleOscillator"` |
| [`LMMS_MINIMAL`](../blob/master/cmake/modules/PluginList.cmake) | Same effect as `PLUGIN_LIST`, but auto-selects the core plugins required for most basic testing. | `True` |
| [`WANT_QT6`, `WANT_SDL`, `WANT_SWH`, `WANT_VST`...](../blob/master/CMakeLists.txt) | Toggle on/off a library, dependency or feature | `ON`, `OFF` |


> \* When provided on command line, all [options](#build-options) must be prefixed with `-D`, e.g<br>
> `cmake -DCMAKE_BUILD_TYPE=Debug`

#### Using Qt5 (Obsolete)
**Note**: These flags are ONLY required for `stable-1.2` branch. Newer branches (e.g. `master`) use Qt5 by default and doesn't require this.

<details>
In order to build LMMS with Qt5, add the following flag when invoking cmake:

   ```bash
   -DWANT_QT5=ON
   ```

... or if you're using `mingw` and configuring via script, you will provide [`-qt5`](https://github.com/LMMS/lmms/blob/stable-1.2/cmake/build_mingw64.sh#L13) as a parameter to the shell script.

   ```bash
   ../cmake/build_mingw64.sh -qt5
   ```

If your Qt5 installation does not reside in standard installation paths, additionally pass e.g.

   ```bash
   -DCMAKE_PREFIX_PATH=/path/to/qt5
   # e.g. on Mac, -DCMAKE_PREFIX_PATH="$(brew --prefix qt)"
   ```
&nbsp;&nbsp;&nbsp; ... still need help?  Ask on our [Discord chat server](https://discord.gg/5kSc32Z)
</details>

#### Using Qt6

**Note**: These flags ONLY work in the master branch since [51529cef](https://github.com/LMMS/lmms/commit/51529cefb16f700acf92a4ab484a3fc0415ccc90). Older branches do not support Qt6.

<details>
In order to build LMMS with Qt6, add the following flag when invoking cmake:

   ```bash
   -DWANT_QT6=ON
   ```

<i>(note: I'm unsure of if and how this works withMinGW - please contribute your wisdom if you know.)</i>

If your Qt6 installation does not reside in standard installation paths, additionally pass e.g.

   ```bash
   -DCMAKE_PREFIX_PATH=/path/to/qt6
   ```
&nbsp;&nbsp;&nbsp; ... still need help?  Ask on our [Discord chat server](https://discord.gg/5kSc32Z)
</details>

<br><!-- End Section --><br>

## Compiling

Do note that this section is for Linux and Mac. For Windows, refer to [this page](dependencies-windows)

Assumes you've already [installed dependencies](#dependencies-quickstart) and [cloned the source code](#clone-source-code) and [configured the build environment](#running-cmake).

   ```bash
   # from "lmms/build" directory
   make -j4
   ```

... and then run by calling:

   ```bash
   ./lmms
   ```

Compilation errors are usually attributed to missing packages, misconfigured system or specific compatibility problems.  Please jump to the appropriate troubleshooting guide:

**Troubleshooting:** [Ubuntu](dependencies-ubuntu#troubleshooting), [Debian](dependencies-debian#troubleshooting), [Fedora](dependencies-fedora#troubleshooting), [openSUSE](dependencies-openSUSE#troubleshooting), [Arch](dependencies-arch#troubleshooting), [macOS](dependencies-macOS#troubleshooting)

<br><!-- End Section --><br>

## Debugging
Debugging LMMS requires a re-run of the `cmake` command, but with the debug symbols turned on.
For a comprehensive tutorial, see also [[Debugging LMMS]]

### Adding Debug Symbols
   ```bash
   # from "lmms/build" directory
   cmake .. -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=../target/
   # -- OR for better performance --
   cmake .. -DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_INSTALL_PREFIX=../target/
   # re-run the build
   make -j4
   ``` 
### Debugging with `gdb`
Assuming you have `gcc` (most common), you'll need `gdb` installed via `apt-get`, `dnf`, `pacman`, etc.
   ```bash
   gdb lmms
   # or alternately gdb ../target/bin/lmms
   (gdb) run
   # once you hit the crash, CTRL + C
   backtrace full
   ```

### Debugging with `lldb`
Assuming you have `clang` (macOS, FreeBSD), you'll need `lldb` installed via `brew`, `pkg_add`, etc.
   ```bash
   lldb lmms
   # or alternately lldb ../target/bin/lmms
   # macOS, use `make -j4 install` then `lldb LMMS.app/Contents/MacOS/lmms`
   (lldb) run
   # once you hit the crash, CTRL + C
   thread backtrace all
   ```

<br><!-- End Section --><br>

## Packaging

| Supported | Format | Platform | Notes |
|-----------|--------|----------|-------|
| ✔️       | `.exe` | [Windows](#packaging) | `lmms>=0.4.0` |
| ✔️       | `.dmg` | [macOS](#packaging) | `lmms>=1.0.0` |
| ✔️       | `.AppImage` | [Linux Universal](#packaging) | `lmms>=1.3.0` |
| ✖️       | `.run` | [Linux Universal](#packaging) | `lmms>=1.3.0`  |
| ❌       | `.deb` | Debian, Ubuntu | See [#1620](../issues/1620). Please contact package maintainers. |
| ❌       | `.rpm` | Fedora, openSUSE | Related to [#1620](../issues/1620). Please contact package maintainers. |

#### Packaging

Assumes you've already [installed dependencies](#dependencies-windows) and [cloned the source code](#clone-source-code) and [configured the build environment](#running-cmake).  Once completed, the release should be [published](#publishing-a-release) for others to download.

```bash
cmake --build build --target package
```

* Linux installers will be produced as `build/lmms-<version>-linux-<arch>.AppImage`
* Mac installers will be produced as `build/lmms-<version>-mac14.7-<arch>.dmg`
* Windows installers will be produces as `build/lmms-<version>-<mingw|msvc>-win64.exe`

<details>
<summary>Packaging <code>1.2.0</code>-<code>1.3.0-alpha.1</code></summary>


These steps should only be used for version of LMMS 1.3.0-alpha.1 or older.  If you're packaging from the master branch, use the standardized steps above.

**Warning:** Must set [`CMAKE_INSTALL_PREFIX`](#build-options) or it will attempt to bundle all of `/usr/local/`.

```bash
# macOS
# IMPORTANT: CMAKE_INSTALL_PREFIX must be set to "../target"
make install     # builds the app bundle
make dmg         # creates the disk image using appdmg
open .           # optional: view in Finder

# Linux
# IMPORTANT: CMAKE_INSTALL_PREFIX must be set to "../target"
make install     # installs to target
make appimage    # creates a Linux AppImage
```

</details>


#### Publishing a Release

Using [GitHub releases](https://help.github.com/articles/creating-releases/), Project administrators may wish to package a release to their personal github account or to the entire project.

* **Personal Release**: Used for distributing early feature or test packages.
   * URL: `https://github.com/<username>/lmms/releases` (replace `<username>` with your `@github` id)
* **Project Release**: Used for distributing official stable and release candidate packages.
   * URL: `https://github.com/lmms/lmms/releases`

Download statistics are available [here](https://api.github.com/repos/lmms/lmms/releases)

Example release notes available [here](../releases/tag/v1.1.0).