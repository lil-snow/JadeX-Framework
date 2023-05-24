#ifndef JX_VECTOR2_H_INCLUDE
#define JX_VEC2_H_INCLUDE

#include "jx/base.h"
#include "jx/math/math.h"

struct v2f32_s {
	union
	{
		struct {
			f32 x, y; 
		};
		
		f32 raw[2];
	};
};

typedef struct v2f32_s v2f32;

typedef struct v2f32_s* v2f32_p;

struct v2f64_s {
	union
	{
		struct
		{
			f64 x, y;
		};

		f64 raw[2];
	};
};

typedef struct v2f64_s v2f64;

typedef struct v2f64_s* v2f64_p;

JX_API v2f32 jx_v2f32_create(f32 x, f32 y);

JX_API f32 jx_v2f32_dot(v2f32 a, v2f32 b);

JX_API f32 jx_v2f32_len(v2f32 v);

JX_API v2f32 jx_v2f32_norm(v2f32 v);

JX_API v2f32 jx_v2f32_add(v2f32 a, v2f32 b);

JX_API v2f32 jx_v2f32_padd(v2f32 a, v2f32 b);

JX_API v2f32 jx_v2f32_sub(v2f32 a, v2f32 b);

JX_API v2f32 jx_v2f32_mul(v2f32 a, v2f32 b);

JX_API v2f32 jx_v2f32_div(v2f32 a, v2f32 b);

JX_API v2f32 jx_v2f32_negate(v2f32 v);

// -------------------
//     * Aliases *
// ------------------- 

#define jx_v2f32_create_single(xy) jx_v2f32_create(xy, xy)

#define jx_v2f32_create_zero() jx_v2f32_create(0.0F, 0.0F)

#endif // JX_VEC2_H_INCLUDE