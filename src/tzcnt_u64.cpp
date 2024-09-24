#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ap_int.h>


ap_uint<7> tzcnt_u64(ap_uint<64> _val) {
    ap_uint<7> count = 0;

    for (int i = 0; i < 64; ++i) {

        if (_val[i] == 1) {
            break;
        }

        count++;
    }

    return count;
}








