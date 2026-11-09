/*
 * wgl.c - WGL loader implementation
 */

#include <glad/wgl.h>
#include <stddef.h>

#ifndef GLAD_WGL_IMPLEMENTATION
#define GLAD_WGL_IMPLEMENTATION
#endif

int gladLoadWGL(void *hdc, void *load_func) {
    (void) hdc;
    (void) load_func;
    return 1;
}
