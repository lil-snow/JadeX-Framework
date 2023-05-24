#ifndef JX_MATH_H_INCLUDE
#define JX_MATH_H_INCLUDE

#include "jx/base.h"

#define JX_PI 3.14159265359F

JX_API f32 jx_f32_min(f32 a, f32 b);

JX_API f32 jx_f32_max(f32 a, f32 b);

JX_API f32 jx_f32_floor(f32 n);

JX_API f32 jx_f32_ceil(f32 n);

JX_API f32 jx_f32_round(f32 n);

JX_API f32 jx_f32_norm(f32 n, f32 min, f32 max);

JX_API f32 jx_f32_lerp(f32 n, f32 min, f32 max);

JX_API f32 jx_f32_map(f32 n, f32 src_min, f32 src_max, f32 dest_min, f32 dest_max);

JX_API f32 jx_f32_clamp(f32 n, f32 min, f32 max);

JX_API f32 jx_f32_radians(f32 n);

JX_API f32 jx_f32_degrees(f32 n);

JX_API f32 jx_f32_pow2(f32 n);

JX_API f32 jx_f32_sqrt(f32 n);

#endif // JX_MATH_H_INCLUDE