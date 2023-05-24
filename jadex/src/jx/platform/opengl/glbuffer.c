#include "jx/platform.h"

#if JX_PLATFORM_WINDOWS

#include "jx/gfx/buffer.h"

#include <glad/glad.h>

#include "jx/base.h"

#include <stdio.h>

vbo jx_vbo_create(u32 size, f32* data)
{	
	gladLoadGL();

	vbo buffer;
	glCreateBuffers(1, (u32*) &buffer.handle);
	printf("Creating buffer...");
	glBindBuffer(GL_ARRAY_BUFFER, (u32) buffer.handle);
	glBufferData(GL_ARRAY_BUFFER, size * JX_F32_SIZE_BYTES, data, GL_STATIC_DRAW);

	printf("Buffer: %i", (u32) buffer.handle);

	return buffer;
}

void jx_vbo_bind(vbo buffer)
{
	glBindBuffer(GL_ARRAY_BUFFER, (u32) buffer.handle);
}

void jx_vbo_unbind()
{
	glBindBuffer(GL_ARRAY_BUFFER, GL_NONE);
}

void jx_vbo_destroy(vbo buffer)
{
	glDeleteBuffers(1, (u32*) &buffer.handle);
}

#endif // JX_API_OPENGL