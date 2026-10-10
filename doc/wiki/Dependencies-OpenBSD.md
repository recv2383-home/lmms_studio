```sh
doas pkg_add cmake fftw3-float fltk fluidsynth git libogg \
jack lame libsamplerate libsndfile libvorbis lilv lv2 ogg \
opus p5-List-Moreutils p5-XML-Parser qt5 suil
```

# Configuring Cmake

```sh
cmake -DCMAKE_PREFIX_PATH=/usr/local/lib/qt5/cmake/ -DWANT_PULSEAUDIO=OFF -DWANT_SDL=OFF -B build
```