#ifndef JX_PLATFORM_H_INCLUDE
#define JX_PLATFORM_H_INCLUDE

// --------------------
//     * Platform *
// --------------------

// Platform: Unknown
#define JX_PLATFORM_UNKNOWN 			0x00000100

#define JX_PLATFORM_WINDOWS 			0x00000101

#define JX_PLATFORM_MACOS 				0x00000102

#define JX_PLATFORM_LINUX 				0x00000103

#ifdef _WIN32
#define JX_PLATFORM_NAME 				"Windows"
#define JX_PLATFORM						JX_PLATFORM_WINDOWS
#else
#define JX_PLATFORM_NAME 				"Unknown"
#define JX_PLATFORM 					JX_PLATFORM_UNKNOWN
#endif

// --------------------
//     * Compiler *
// --------------------

#define JX_COMPILER_UNKNOWN				0x00000200

#define JX_COMPILER_GNU					0x00000201

#define JX_COMPILER_MSVC				0x00000202

#ifdef __GNUC__
#define JX_COMPILER_NAME 				"GCC"
#define JX_COMPILER_VERSION_MAJOR 		__GNUC__
#define JX_COMPILER_VERSION_MINOR 		__GNUC_MINOR__
#define JX_COMPILER_VERSION_PATCHLEVEL 	__GNUC_PATCHLEVEL__
#define JX_COMPILER 					JX_COMPILER_GCC
#else
#define JX_COMPILER_NAME 				"Unknown"
#define JX_COMPILER_VERSION_MAJOR 		0
#define JX_COMPILER_VERSION_MINOR 		0
#define JX_COMPILER_VERSION_PATCHLEVEL 	0

#endif

// ------------------------
//     * Graphics API *
// ------------------------

#define JX_OPENGL_API 					0x00000301

#define JX_DIRECTX_API					0x00000302

#define JX_VULKAN_API 					0x00000303

#endif // JX_PLATFORM_H_INCLUDE