#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ap_int.h>

ap_uint<7> popcount_u64_c(const ap_uint<64> in) {

    ap_uint<7> out = 0;
    for (int i = 0; i < 64; ++i) {
        #pragma HLS UNROLL
        out += in[i];
    }

    return out ;
}






