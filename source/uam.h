#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum
{
	uam_pipeline_stage_vertex,
	uam_pipeline_stage_tess_ctrl,
	uam_pipeline_stage_tess_eval,
	uam_pipeline_stage_geometry,
	uam_pipeline_stage_fragment,
	uam_pipeline_stage_compute,
} uam_pipeline_stage;

void uam_init();
void uam_deinit();

bool uam_compileDksh(uam_pipeline_stage stage, const char* source, int optLevel, uint8_t** dkshOut, uint32_t* size);

#ifdef __cplusplus
}
#endif
