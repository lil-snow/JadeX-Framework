#ifndef JX_VBO_H_INCLUDE
#define JX_VBO_H_INCLUDE

#include "jx/base.h"

struct vbo_s { ptr* handle; };

typedef struct vbo_s vbo;
typedef struct vbo_s* vbo_p;

vbo jx_vbo_create(u32 size, f32* data);
void jx_vbo_bind(vbo buffer);
void jx_vbo_unbind();
void jx_vbo_destroy(vbo buffer);

#endif // JX_VBO_H_INCLUDE