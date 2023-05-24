#ifndef JX_BASE_H_INCLUDE
#define JX_BASE_H_INCLUDE

#define JX_INLINE 			inline

#define JX_NULL_TYPE 		void
#define JX_UNSIGNED(x) 		unsigned x

#include "jx/platform.h"

// Used to define an 8-bit signed integer
#define JX_I8				char
// 8-bit signed integer
typedef JX_I8 				i8;
// Size in bits of an 8-bit signed integer
#define JX_I8_SIZE_BITS		8
// Size in bytes of an 8-bit signed integer
#define JX_I8_SIZE_BYTES	1

#define JX_I16				short
// 16-bit signed integer
typedef JX_I16 				i16;
#define JX_I16_SIZE_BITS	16
#define JX_I16_SIZE_BYTES	8

#define JX_I32 				int
// 32-bit signed integer
typedef JX_I32 				i32;
#define JX_I32_SIZE_BITS	32
#define JX_I32_SIZE_BYTES	4

#define JX_I64 				long
// 64-bit signed integer
typedef JX_I64 				i64;
#define JX_I64_SIZE_BITS	64
#define JX_I64_SIZE_BYTES	8

#define JX_F32 				float
// 32-bit floating point number
typedef JX_F32 				f32;
#define JX_F32_SIZE_BITS	32
#define JX_F32_SIZE_BYTS	4

#define JX_F64				double
// 64-bit floating point number
typedef JX_F64 				f64;
#define JX_F64_SIZE_BITS	64
#define JX_F64_SIZE_BYTES	8

#define JX_U8 				JX_UNSIGNED(JX_I8)
// 8-bit unsigned integer
typedef JX_U8				u8;
#define JX_U8_SIZE_BITS		8
#define JX_U8_SIZE_BYTES	1

#define JX_U16				JX_UNSIGNED(JX_I16)				
// 16-bit unsigned integer
typedef JX_U16				u16;
#define JX_U16_SIZE_BITS	16
#define JX_U16_SIZE_BYTES	2

#define JX_U32				JX_UNSIGNED(JX_I32)
// 32-bit unsigned integer
typedef JX_U32				u32;
#define JX_U32_SIZE_BITS	32
#define JX_U32_SIZE_BYTES	4

#define JX_U64 				JX_UNSIGNED(JX_I64)
// 64-bit unsigned integer
typedef JX_U64				u64;
#define JX_U64_SIZE_BITS	64
#define JX_U64_SIZE_BYTES	8

// boolean (8-bit unsigned integer)
typedef u8					b8;

#ifdef JX_BUILD_DLL
	#if JX_COMPILER == JX_COMPILER_MSVC
		#define JX_API __declspec(dllexport)
	#else
		#define JX_API 
	#endif
#else
	#if JX_COMPILER == JX_COMPILER_MSVC
		#define JX_API __declspec(dllimport)
	#else
		#define JX_API 
	#endif 
#endif

#endif