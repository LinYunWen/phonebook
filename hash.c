#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "phonebook_opt.h"

/* reference on: https://www.byvoid.com/zhs/blog/string-hash-compare */
int BKDRHash(char *str)
{
    int seed = 131;
    int hash_value = 0;

    while (*str) {
        hash_value = hash_value * seed + (*str++);
    }
    return hash_value & 0x00000FFF;
}

hash_entry* hash_linear_append(char lastName[], entry *value, hash_entry *block)
{
    block->next = (hash_entry*) malloc(sizeof(hash_entry));
    block = block->next;
    strcpy(block->lastName, lastName);
    block->value = value;
    block->next = NULL;

    return block;
}