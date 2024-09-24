#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ap_int.h>
/*
ap_uint<64> popcount_u64_c(const ap_uint<64> val) {//version 1

    ap_uint<64> count = 0;
    for (int i = 0; i < 64; ++i) {
      #pragma HLS UNROLL
        if (val[i]) {
            count++;
        }
    }

    return count;
}

ap_uint<64> popcount_u64_c(const ap_uint<64> _val) //version2
{
	ap_uint<64> x = _val;
    int count = 0;
    while ( x ) {
        count += (x & 1);
        x >>= 1;
    }
    return count;
}

*/
ap_uint<7> popcount_u64_c(const ap_uint<64> in) {//version 4

    ap_uint<7> out = 0;
    for (int i = 0; i < 64; ++i) {
        #pragma HLS UNROLL
        out += in[i];
    }

    return out ;
}








