/*
 * vulkan.h - Vulkan function loader header
 * Minimal stub - no Vulkan SDK dependency required
 */

#ifndef VULKAN_H_
#define VULKAN_H_

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
#include <stdint.h>

typedef uint32_t VkFlags;
typedef uint32_t VkBool32;
typedef uint64_t VkDeviceSize;
typedef uint32_t VkSampleCountFlags;
typedef void *VkInstance;
typedef void *VkPhysicalDevice;
typedef void *VkDevice;
typedef void *VkQueue;
typedef void *VkCommandBuffer;
typedef void *VkBuffer;
typedef void *VkImage;
typedef void *VkDeviceMemory;
typedef void *VkSurfaceKHR;
typedef void *VkSwapchainKHR;
typedef void *VkDebugUtilsMessengerEXT;
typedef void *VkDebugReportCallbackEXT;
typedef uint32_t VkResult;
typedef void *VkAllocationCallbacks;
typedef void *PFN_vkVoidFunction;

#define VK_SUCCESS 0
#define VK_NOT_READY 1
#define VK_TIMEOUT 2
#define VK_EVENT_SET 3
#define VK_EVENT_RESET 4
#define VK_INCOMPLETE 5
#define VK_ERROR_OUT_OF_HOST_MEMORY -1
#define VK_ERROR_OUT_OF_DEVICE_MEMORY -2
#define VK_ERROR_INITIALIZATION_FAILED -3
#define VK_ERROR_DEVICE_LOST -4
#define VK_ERROR_MEMORY_MAP_FAILED -5
#define VK_ERROR_LAYER_NOT_PRESENT -6
#define VK_ERROR_EXTENSION_NOT_PRESENT -7
#define VK_ERROR_FEATURE_NOT_PRESENT -8
#define VK_ERROR_INCOMPATIBLE_DRIVER -9
#define VK_ERROR_TOO_MANY_OBJECTS -10
#define VK_ERROR_FORMAT_NOT_SUPPORTED -11
#define VK_ERROR_FRAGMENTED_POOL -12
#define VK_ERROR_UNKNOWN -13
#define VK_ERROR_OUT_OF_POOL_MEMORY -1000069000
#define VK_ERROR_INVALID_EXTERNAL_HANDLE -1000072003

#define VK_MAX_PHYSICAL_DEVICE_NAME_SIZE 256
#define VK_UUID_SIZE 16
#define VK_LOD_CLAMP_NONE 1000.0f

typedef VkResult (GLAPIENTRY *PFN_vkCreateInstance)(void *, void *, void *);
typedef void (GLAPIENTRY *PFN_vkDestroyInstance)(void *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkEnumeratePhysicalDevices)(void *, uint32_t *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkGetPhysicalDeviceProperties)(void *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkCreateDevice)(void *, void *, void *, void *);
typedef void (GLAPIENTRY *PFN_vkDestroyDevice)(void *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkGetDeviceQueue)(void *, uint32_t, uint32_t, void *);
typedef VkResult (GLAPIENTRY *PFN_vkQueueSubmit)(void *, uint32_t, void *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkQueueWaitIdle)(void *);
typedef VkResult (GLAPIENTRY *PFN_vkDeviceWaitIdle)(void *);
typedef VkResult (GLAPIENTRY *PFN_vkAllocateMemory)(void *, void *, void *, void *);
typedef void (GLAPIENTRY *PFN_vkFreeMemory)(void *, void *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkMapMemory)(void *, void *, VkDeviceSize, VkDeviceSize, VkFlags, void **);
typedef void (GLAPIENTRY *PFN_vkUnmapMemory)(void *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkCreateBuffer)(void *, void *, void *, void *);
typedef void (GLAPIENTRY *PFN_vkDestroyBuffer)(void *, void *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkCreateImage)(void *, void *, void *, void *);
typedef void (GLAPIENTRY *PFN_vkDestroyImage)(void *, void *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkBindBufferMemory)(void *, void *, void *, VkDeviceSize);
typedef VkResult (GLAPIENTRY *PFN_vkBindImageMemory)(void *, void *, void *, VkDeviceSize);
typedef void (GLAPIENTRY *PFN_vkGetBufferMemoryRequirements)(void *, void *, void *);
typedef void (GLAPIENTRY *PFN_vkGetImageMemoryRequirements)(void *, void *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkCreateSwapchainKHR)(void *, void *, void *);
typedef void (GLAPIENTRY *PFN_vkDestroySwapchainKHR)(void *, void *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkGetSwapchainImagesKHR)(void *, void *, uint32_t *, void *);
typedef VkResult (GLAPIENTRY *PFN_vkAcquireNextImageKHR)(void *, void *, uint64_t, void *, void *, uint32_t *);
typedef VkResult (GLAPIENTRY *PFN_vkQueuePresentKHR)(void *, void *);

GLAPI PFN_vkCreateInstance vkCreateInstance;
GLAPI PFN_vkDestroyInstance vkDestroyInstance;
GLAPI PFN_vkEnumeratePhysicalDevices vkEnumeratePhysicalDevices;
GLAPI PFN_vkGetPhysicalDeviceProperties vkGetPhysicalDeviceProperties;
GLAPI PFN_vkCreateDevice vkCreateDevice;
GLAPI PFN_vkDestroyDevice vkDestroyDevice;
GLAPI PFN_vkGetDeviceQueue vkGetDeviceQueue;
GLAPI PFN_vkQueueSubmit vkQueueSubmit;
GLAPI PFN_vkQueueWaitIdle vkQueueWaitIdle;
GLAPI PFN_vkDeviceWaitIdle vkDeviceWaitIdle;
GLAPI PFN_vkAllocateMemory vkAllocateMemory;
GLAPI PFN_vkFreeMemory vkFreeMemory;
GLAPI PFN_vkMapMemory vkMapMemory;
GLAPI PFN_vkUnmapMemory vkUnmapMemory;
GLAPI PFN_vkCreateBuffer vkCreateBuffer;
GLAPI PFN_vkDestroyBuffer vkDestroyBuffer;
GLAPI PFN_vkCreateImage vkCreateImage;
GLAPI PFN_vkDestroyImage vkDestroyImage;
GLAPI PFN_vkBindBufferMemory vkBindBufferMemory;
GLAPI PFN_vkBindImageMemory vkBindImageMemory;
GLAPI PFN_vkGetBufferMemoryRequirements vkGetBufferMemoryRequirements;
GLAPI PFN_vkGetImageMemoryRequirements vkGetImageMemoryRequirements;
GLAPI PFN_vkCreateSwapchainKHR vkCreateSwapchainKHR;
GLAPI PFN_vkDestroySwapchainKHR vkDestroySwapchainKHR;
GLAPI PFN_vkGetSwapchainImagesKHR vkGetSwapchainImagesKHR;
GLAPI PFN_vkAcquireNextImageKHR vkAcquireNextImageKHR;
GLAPI PFN_vkQueuePresentKHR vkQueuePresentKHR;

#ifdef __cplusplus
}
#endif

#endif /* VULKAN_H_ */
