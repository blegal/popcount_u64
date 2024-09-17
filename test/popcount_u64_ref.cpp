#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <immintrin.h>


uint64_t popcount_u64_builtin(const uint64_t val)
{
    return __builtin_popcountll(val);
}
