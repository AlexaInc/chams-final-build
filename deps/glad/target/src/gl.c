/*
 * gl.c - OpenGL loader implementation
 */

#include <glad/gl.h>
#include <stddef.h>

#ifndef GLAD_GL_IMPLEMENTATION
#define GLAD_GL_IMPLEMENTATION
#endif

int gladLoadGLContext(void *dispatch_table, void *load_func) {
    (void) dispatch_table;
    (void) load_func;
    return 1;
}
