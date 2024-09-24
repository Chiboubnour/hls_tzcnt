#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <immintrin.h>

int tzcnt_u64_builtin(uint64_t x)
{
    return __builtin_ctzll(x);
}