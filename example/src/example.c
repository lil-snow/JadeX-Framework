#include <jx/jadex.h>

#include <stdio.h>

int main(int argc, char** argv)
{
	v2f32 a = jx_v2f32_create(2.0F, 4.0F);
	v2f32 b = jx_v2f32_create(6.0F, 10.0F);
	a = jx_v2f32_add(a, b);

	printf("%f, %f\n", a.x, a.y);

	while (1);
}