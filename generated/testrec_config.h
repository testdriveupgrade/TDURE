
#pragma once

#ifndef PPC_CONFIG_H_INCLUDED
#define PPC_CONFIG_H_INCLUDED


#define PPC_IMAGE_BASE 0x82000000ull
#define PPC_IMAGE_SIZE 0x1730000ull
#define PPC_CODE_BASE 0x823E0000ull
#define PPC_CODE_SIZE 0x7B313Cull

#define REXCRT_HEAP 0

#include <rex/ppc/image_info.h>
extern const rex::PPCImageInfo PPCImageConfig;

#endif


