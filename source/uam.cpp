#include "uam.h"

#include "compiler_iface.h"

void uam_init()
{
    glsl_frontend_init();
}

void uam_deinit()
{
    glsl_frontend_exit();
}

bool uam_compileDksh(uam_pipeline_stage stage, const char* source, int optLevel, uint8_t** dkshOut, uint32_t* size)
{
    DekoCompiler compiler{::pipeline_stage(stage), optLevel};
    if (compiler.CompileGlsl(source))
    {
        *dkshOut = compiler.OutputDksh(*size);
        return true;
    }
    return false;
}

