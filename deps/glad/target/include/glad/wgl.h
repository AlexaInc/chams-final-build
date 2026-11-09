/*
 * wgl.h - WGL function loader header
 */

#ifndef WGL_H
#define WGL_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_WIN32)
    #if !defined(APIENTRY) && !defined(__CYGWIN__) && !defined(__SCITECH_SNAP__)
        #define WIN32_LEAN_AND_MEAN
        #include <windows.h>
        #undef APIENTRY
        #define GLAPIENTRY __stdcall
    #else
        #define GLAPIENTRY
    #endif
#else
    #define GLAPIENTRY
#endif

#ifndef GLAPI
#if defined(__GNUC__) && __GNUC__ >= 4
    #define GLAPI __attribute__((visibility("default")))
#else
    #define GLAPI
#endif
#endif

#include <stddef.h>

typedef BOOL (GLAPIENTRY *PFNWGLCHOOSEPIXELFORMATARBPROC)(void *, const int *, const float *, UINT, int *, UINT *);
typedef HGLRC (GLAPIENTRY *PFNWGLCREATECONTEXTATTRIBSARBPROC)(void *, void *, const int *);
typedef int (GLAPIENTRY *PFNWGLGETPIXELFORMATATTRIBIVARBPROC)(void *, int, int, UINT, const int *, int *);
typedef int (GLAPIENTRY *PFNWGLGETPIXELFORMATATTRIBFVARBPROC)(void *, int, int, UINT, const int *, float *);
typedef BOOL (GLAPIENTRY *PFNWGLSWAPINTERVALEXTPROC)(int);
typedef int (GLAPIENTRY *PFNWGLGETSWAPINTERVALEXTPROC)(void);

GLAPI PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB;
GLAPI PFNWGLCREATECONTEXTATTRIBSARBPROC wglCreateContextAttribsARB;
GLAPI PFNWGLGETPIXELFORMATATTRIBIVARBPROC wglGetPixelFormatAttribivARB;
GLAPI PFNWGLGETPIXELFORMATATTRIBFVARBPROC wglGetPixelFormatAttribfARB;
GLAPI PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT;
GLAPI PFNWGLGETSWAPINTERVALEXTPROC wglGetSwapIntervalEXT;

#ifdef __cplusplus
}
#endif

#endif /* WGL_H */
