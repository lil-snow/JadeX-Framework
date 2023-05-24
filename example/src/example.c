#include <jx/jadex.h>

#include <stdio.h>

int main(int argc, char** argv)
{
	f32 data[] = {
		-0.5f, -0.5f,
		 0.0f,  0.5f,
		 0.5f, -0.5f
	};

	vbo buffer = jx_vbo_create(6, data);
	jx_vbo_bind(buffer);

	printf("%i", (u32) buffer.handle);

	while (1);

	return 0;
}