/*
 * Copyright (C) 2024, Botenders, Inc. All rights reserved.
 */

#ifndef __HAYAI_COMPATIBILITY
#define __HAYAI_COMPATIBILITY

#    if __cplusplus > 201100L
#        define __hayai_noexcept noexcept
#    else
#        define __hayai_noexcept
#    endif

#endif
