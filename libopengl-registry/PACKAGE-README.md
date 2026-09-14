# libopengl-registry - Khronos OpenGL, OpenGL ES, and OpenGL SC API and extension headers

This is a `build2` package for the [`OpenGL-Registry`](https://github.com/KhronosGroup/OpenGL-Registry)
C headers. It provides the Khronos OpenGL, OpenGL ES, and OpenGL SC API
headers and extension headers, the `gl.xml`, `glx.xml`, and `wgl.xml` API
registries, and extension specifications. `<KHR/khrplatform.h>` comes from
the `libegl-registry` dependency.


## Usage

To start using `libopengl-registry` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libopengl-registry ~2026.8.3
```

Then import the library in your `buildfile`:

```
import libs = libopengl-registry%lib{opengl-registry}
```

The package version is `GL_GLEXT_VERSION` from `GL/glext.h` written as
`YYYY.M.DD`. That value is a registry snapshot date, not semantic versioning,
so prefer `~` over `^`.

This package is header-only. It does not link an OpenGL implementation. To link
the system OpenGL library, import `libopengl-meta%lib{opengl-gl}` or equivalent.


## Importable targets

This package provides the following importable targets:

```
lib{opengl-registry}
```

A header-only library that adds the include path for `<GL/glcorearb.h>`,
`<GL/glext.h>`, `<GL/glxext.h>`, `<GL/wgl.h>`, `<GL/wglext.h>`, and the
OpenGL ES and OpenGL SC headers under `<GLES/>`, `<GLES2/>`, `<GLES3/>`,
`<GLSC/>`, and `<GLSC2/>`.


## Configuration variables

This package has no configuration variables.
