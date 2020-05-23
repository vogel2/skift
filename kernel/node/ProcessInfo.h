#pragma once

/* Copyright © 2018-2020 N. Van Bossuyt.                                      */
/* This code is licensed under the MIT License.                               */
/* See: LICENSE.md                                                            */

#include "kernel/node/Node.h"

typedef struct
{
    FsNode node;
} FsProcessInfo;

FsNode *process_info_create(void);

void process_info_initialize(void);