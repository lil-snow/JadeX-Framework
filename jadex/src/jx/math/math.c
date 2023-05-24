#include "jx/math/math.h"

#include <math.h>

f32 jx_f32_min(f32 a, f32 b)
{
	return (a < b) ? a : b;
}

f32 jx_f32_max(f32 a, f32 b)
{
	return (a > b) ? a : b;
}

f32 jx_f32_floor(f32 n)
{
	return (f32) (i32) n; 
}

f32 jx_f32_ceil(f32 n)
{
	f32 f = jx_f32_floor(n);
	return (n == f) ? f : f + 1.0F;
}

f32 jx_f32_round(f32 n)
{
	f32 f = jx_f32_floor(n);
	return (n < f + 0.5F) ? f : f + 1.0F;
}

f32 jx_f32_norm(f32 n, f32 min, f32 max)
{
	return (n - min) / (max - min);
}

f32 jx_f32_lerp(f32 n, f32 min, f32 max)
{
	return (max - min) * n + min;
}

f32 jx_f32_map(f32 n, f32 src_min, f32 src_max, f32 dest_min, f32 dest_max)
{
	return jx_f32_lerp(jx_f32_norm(n, src_min, src_max), dest_min, dest_max);
}

f32 jx_f32_clamp(f32 n, f32 min, f32 max)
{
	return jx_f32_min(jx_f32_max(n, min), max);
}

f32 jx_f32_radians(f32 n)
{
	return n / 180 * JX_PI;
}

f32 jx_f32_degrees(f32 n)
{
	return n * 180 / JX_PI;
}

f32 jx_f32_pow2(f32 n)
{
	return n * n;
}

f32 jx_f32_sqrt(f32 n)
{
	return sqrtf(n);
}