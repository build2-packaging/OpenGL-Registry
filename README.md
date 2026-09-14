# OpenGL-Registry - Khronos OpenGL, OpenGL ES, and OpenGL SC API headers

This is a `build2` package repository for [`OpenGL-Registry`](https://github.com/KhronosGroup/OpenGL-Registry),
the Khronos OpenGL, OpenGL ES, and OpenGL SC API and extension registry.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`OpenGL-Registry` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libopengl-registry/PACKAGE-README.md) file.

The development setup for `OpenGL-Registry` uses the standard `bdep`-based workflow.
For example:

```
git clone --recursive https://github.com/build2-packaging/OpenGL-Registry.git
cd OpenGL-Registry

bdep init -C @gcc cc config.c=gcc
bdep update
bdep test
```
