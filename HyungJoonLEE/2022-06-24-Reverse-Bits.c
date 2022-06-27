#include "common.h"

uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;
    int count = 0;
    while(count < 32) {
        result <<= 1;
        result |= n & 1;
        n >>= 1;
        count++;
    }
    return result;
}