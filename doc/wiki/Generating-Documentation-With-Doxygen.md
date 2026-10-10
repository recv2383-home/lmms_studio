# Dependencies

Along with the usual [dependencies for building LMMS](Compiling#dependencies) you will also need [Doxygen](https://www.doxygen.nl/index.html).

# Generating the Documentation

Assuming you've already [cloned the source code](Compiling#clone-source-code), [setup the `build/` directory, and ran cmake](Compiling#cmake-quickstart) and are also in `lmms/build/` (where the previously linked pages will leave you) directory run the following command:

```bash
cmake --build . --target doc
```

Documentation will be generated in `lmms/build/doc/doc/`.