#include <stdint.h>

typedef struct m6dVector3_s {
	float x, y, z;
} m6dVector3;

typedef struct m6dMatrix_s {
	float m[4][4];
} m6dMatrix;

typedef struct m6dTransform_s {
	m6dVector3 position;
	m6dVector3 rotation;
	m6dVector3 scale;
	m6dMatrix* matrix;
} m6dTransform;

typedef struct m6dMotionPath_s {
	// Length of motion path, in frames.
	uint32_t length;
	m6dTransform* frames;
} m6dMotionPath;

typedef struct m6dMesh_internal_s m6dMesh_internal;
typedef struct m6dMesh_s {
	m6dMesh_internal* internal;
	m6dMotionPath* motionPath;
} m6dMesh;

typedef struct m6dRenderEngine_internal_s m6dRenderEngine_internal;
typedef struct m6dRenderEngine_s {
	m6dRenderEngine_internal* internal;
	uint16_t width, height;
} m6dRenderEngine;