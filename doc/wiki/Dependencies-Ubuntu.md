**Note:** For cross-compiling Windows binaries on Linux, please see [Windows Dependencies](dependencies-windows) instead.

```bash
sudo apt install build-essential cmake libsndfile1-dev libfftw3-dev \
libvorbis-dev libogg-dev libmp3lame-dev libasound2-dev libjack-jackd2-dev \
libsamplerate0-dev libsdl2-dev libstk-dev stk libfluidsynth-dev portaudio19-dev \
libfltk1.3-dev libxinerama-dev libxft-dev libgig-dev git perl libxml2-utils \
libxml-perl liblist-moreutils-perl qtbase5-dev qtbase5-private-dev \
qttools5-dev-tools qttools5-dev libqt5svg5-dev libqt5x11extras5-dev libx11-xcb-dev \
libxcb-keysyms1-dev libxcb-util0-dev
```

### Lv2

Required packages: `lv2-dev liblilv-dev libsuil-dev`

### VST
Install libraries for VST support

```bash
# 64-bit VST support
sudo apt install wine64-tools libwine-dev

# 32-bit VST support
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get install libwine-dev:i386 gcc-multilib g++-multilib

# Optional, for testing VSTs
sudo apt-get install wine wine32:i386

# winehq repos are supported too (pick one)
# sudo apt-get install winehq-stable wine-stable-dev
# sudo apt-get install winehq-devel wine-devel-dev
# sudo apt-get install winehq-staging wine-staging-dev
```

### Carla

Building with Carla support is default now, no additional dependencies needed.

<details>
<summary>Click to show outdated Carla instructions</summary>

Install libraries for [Carla](http://kxstudio.linuxaudio.org/Applications:Carla) support:

```bash
# Update software sources
sudo apt-get update

# Install required dependencies if needed
sudo apt-get install apt-transport-https gpgv wget

# Download kxstudio package file
wget https://launchpad.net/~kxstudio-debian/+archive/kxstudio/+files/kxstudio-repos_11.1.0_all.deb

# Install it
sudo dpkg -i kxstudio-repos_11.1.0_all.deb
sudo apt install -y carla
```

</details>

&nbsp;&nbsp;&nbsp;&nbsp;...done installing?  Next, [clone the source code](Compiling#clone-source-code)
<br><!-- End Section--><br>

## Troubleshooting

### CMake

Some project operations -- such as generating AppImages -- may require a newer version of CMake.  To force a newer version, install from `snap`:

```bash
sudo snap install cmake --classic
alias cmake='snap run cmake'

# keywords: WARNING AppImage creation requires at least CMake 3.19
```

### Unmet dependencies
Sometimes `apt` will not allow all packages to be installed simultaneously. (e.g. `foo : Depends: bar (=1.0.0) but it is not going to be installed`).  Install them or resolve dependencies individually.
```bash
sudo apt install libfluidsynth-dev
sudo apt install libjack-jackd2-dev

# keywords: The following packages have unmet dependencies
# keywords: Unknown command PKG_GET_VARIABLE
# note: libsdl-dev might need a version number when installing dependencies. Example: libsdl1.2-dev 
```

This can also happen if you already have Jack1 installed on your system, and you're trying to install Jack2 development files. You should try installing Jack1 dev files instead:
```bash
sudo apt install libjack-dev

# keywords: The following packages have unmet dependencies
```

Both Jack1 and Jack2 work fine with LMMS, for differences between the two [please consult the Jackaudio wiki.](https://github.com/jackaudio/jackaudio.github.com/wiki/Q_difference_jack1_jack2)

### qmake
If `qmake --version` shows an error:
```bash
sudo apt install qt5-default

# keywords: qmake: could not find a Qt installation of ''
```


### ia32-libs
Older environments may complain that `ia32-libs` package has been removed.  See [this page](http://askubuntu.com/a/107249/412004) for more information.
```bash
sudo apt install wine32

# keywords: ia32-libs package has been removed
```

### Using `build-dep`

If you are unable to build LMMS after following the steps above, you may want to try `apt-get`'s `build-dep` command.

This command will install required dependencies for a package.

For Ubuntu:

1. Edit `/etc/apt/sources.list`, and uncomment any `deb-src` entries.
2. `sudo apt update`
3. `sudo apt build-dep lmms`

For Linux Mint:

1. Open "Software Sources".
2. Flip the "Source code repositories" switch in the Official Repositories tab.
3. Update the apt cache when prompted.
4. Run `sudo apt build-dep lmms`.

__Remember to comment out `deb-src` entries in `/etc/apt/sources.list` when you are finished, or all subsequent `apt update` commands will take twice as long__ 