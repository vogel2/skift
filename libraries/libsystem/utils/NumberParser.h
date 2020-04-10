#pragma once

#include <libsystem/runtime.h>

typedef struct
{
    int base;
} NumberParser;

#define PARSER_BINARY ((NumberParser){2})
#define PARSER_OCTAL ((NumberParser){8})
#define PARSER_DECIMAL ((NumberParser){10})
#define PARSER_HEXADECIMAL ((NumberParser){16})

bool parse_uint(NumberParser parser, const char *str, size_t size, unsigned int *result);

bool parse_int(NumberParser parser, const char *str, size_t size, int *result);

bool parse_double(NumberParser parser, const char *str, size_t size, int *result);