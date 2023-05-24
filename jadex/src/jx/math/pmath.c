#include "jx/math/pmath.h"

#if !defined(JX_NO_SIMD)
#include <xmmintrin.h>
#endif

group_2f32 jx_group_2f32_create(f32 a, f32 b)
{
	group_2f32 group;
	group.a = a;
	group.b = b;

	return group;
}

group_2f32 jx_group_2f32_padd(group_2f32 a, group_2f32 b)
{
#if !defined JX_NO_SIMD
	__m128 left = _mm_load_ps((const f32*) &a);
	__m128 right = _mm_load_ps((const f32*) &b);
	__m128 result = _mm_add_ps(left, right);

	return jx_group_2f32_create(result.m128_f32[0], result.m128_f32[1]);
#else
	return jx_group_2f32_create(a.a + b.a, a.b + b.b);
#endif
}