#ifndef JX_PMATH_H_INCLUDE
#define JX_PMATH_H_INCLUDE

#include "jx/base.h"

#ifdef JX_NO_SIMD
	#define JX_EXCLUDE_SIMD
#endif 

struct group_2f32_s
{
	f32 a, b;
};

typedef struct group_2f32_s 	group_2f32;
typedef struct group_2f32_s* 	group_2f32_p;

JX_API group_2f32 jx_group_2f32_create(f32 a, f32 b);
JX_API group_2f32 jx_group_2f32_padd(group_2f32 a, group_2f32 b);
JX_API group_2f32 jx_group_2f32_padd_s(group_2f32 a, f32 b);
JX_API group_2f32 jx_group_2f32_psub(group_2f32 a, group_2f32 b);
JX_API group_2f32 jx_group_2f32_psub_s(group_2f32 a, f32 b);
JX_API group_2f32 jx_group_2f32_pmul(group_2f32 a, group_2f32 b);
JX_API group_2f32 jx_group_2f32_pmul_s(group_2f32 a, f32 b);
JX_API group_2f32 jx_group_2f32_pdiv(group_2f32 a, group_2f32 b);
JX_API group_2f32 jx_group_2f32_pdiv_s(group_2f32 a, f32 b);

#endif