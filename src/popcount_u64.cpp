#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ap_int.h>

ap_uint<64> popcount_u64(const ap_uint<64> val) {
#pragma HLS INLINE

    ap_uint<64> count = 0;
        for (int i = 0; i < 64; ++i) {
#pragma HLS UNROLL
        if (val[i]) {
            count++;
        }
    }

    return count;
}
