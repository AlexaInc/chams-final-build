/*
 * vulkan.c - Vulkan loader implementation
 */

#include <glad/vulkan.h>
#include <stddef.h>

#ifndef GLAD_VULKAN_IMPLEMENTATION
#define GLAD_VULKAN_IMPLEMENTATION
#endif

int gladLoadVulkan(void *instance, void *load_func) {
    (void) instance;
    (void) load_func;
    return 1;
}

#endif /* GLAD_VULKAN_IMPLEMENTATION */
