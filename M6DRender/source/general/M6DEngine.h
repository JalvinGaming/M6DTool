#include <stdint.h>
typedef struct m6dMesh_internal_s m6dMesh_internal;
typedef struct m6dMesh_s {
	m6dMesh_internal* internal;
} m6dMesh;

typedef struct m6dRenderEngine_internal_s m6dRenderEngine_internal;
typedef struct m6dRenderEngine_s {
	m6dRenderEngine_internal* internal;
	uint16_t width, height;
} m6dRenderEngine;