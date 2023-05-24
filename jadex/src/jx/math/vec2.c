#include "jx/math/vec2.h"

#include "jx/math/math.h"
#include "jx/math/pmath.h"

v2f32 jx_v2f32_create(f32 x, f32 y)
{
	v2f32 vector;
	vector.x = x;
	vector.y = y;

	return vector;
}

f32 jx_v2f32_dot(v2f32 a, v2f32 b)
{
	return a.x * b.x + a.y * b.y;
}

f32 jx_v2f32_len(v2f32 v)
{
	return jx_f32_sqrt(jx_f32_pow2(v.x) + jx_f32_pow2(v.y));
}

v2f32 jx_v2f32_norm(v2f32 v)
{
	f32 length = jx_v2f32_len(v);
	return jx_v2f32_create(v.x / length, v.y / length);
}

v2f32 jx_v2f32_add(v2f32 a, v2f32 b)
{
	return jx_v2f32_create(a.x + b.x, a.y + b.y);
}

v2f32 jx_v2f32_padd(v2f32 a, v2f32 b)
{
	group_2f32 left = jx_group_2f32_create(a.x, a.y);
	group_2f32 right = jx_group_2f32_create(b.x, b.y);
	group_2f32 result = jx_group_2f32_padd(left, right);

	return jx_v2f32_create(result.a, result.b);
}

v2f32 jx_v2f32_sub(v2f32 a, v2f32 b)
{
	return jx_v2f32_create(a.x - b.x, a.y - b.y);
}

v2f32 jx_v2f32_mul(v2f32 a, v2f32 b)
{
	return jx_v2f32_create(a.x * b.x, a.y * b.y);
}

v2f32 jx_v2f32_div(v2f32 a, v2f32 b)
{
	return jx_v2f32_create(a.x / b.x, a.y / b.y);
}

v2f32 jx_v2f32_negate(v2f32 v)
{
	return jx_v2f32_create(-v.x, -v.y);
}