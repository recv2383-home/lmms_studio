```bash
sudo pacman -S --needed git cmake make gcc qt5-base qt5-tools qt5-wayland qt5-x11extras libsndfile fftw libvorbis lame \
libsamplerate libogg wine stk fluidsynth fltk libgig carla jack2 sdl2-compat alsa-lib portaudio \
perl-list-moreutils perl-exporter-tiny perl-xml-parser lv2 lilv
```
&nbsp;&nbsp;&nbsp;&nbsp;...done installing?  Next, [clone the source code](Compiling#clone-source-code)
<br><!-- End Section--><br>


## Troubleshooting

Recent versions of arch-flavoured wine don't support 32-bit prefixes anymore due to using the new WoW64 system instead. This means that compiling LMMS with up-to-date wine unfortunately also doesn't include the necessary 32-bit windows host to use 32-bit VST plugins. You know this is happening if cmake complains `winegcc fails to compile 32-bit binaries, please make sure you have 32-bit GCC libraries` in the "VST plugin host" section. The issue for this is [#8050](https://github.com/LMMS/lmms/issues/8050) - also includes workarounds

Please feel free to [add something](Dependencies-Arch/_edit)!