#include <stdlib.h>

#include "hash.h"

/* reference on: https://www.byvoid.com/zhs/blog/string-hash-compare */
unsigned int BKDRHash(char *str)
{
    unsigned int seed = 131;
    unsigned int hash_value = 0;

    while (*str) {
        // hash_value = hash_value * seed + (*str++);
        hash_value += *str;
    }
    return hash_value & 0x7FFFFFFF;
}