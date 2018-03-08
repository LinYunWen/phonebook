#include "phonebook_opt.h"

#ifndef _HASH_H
#define _HASH_H

#define MAX_LAST_NAME_SIZE 16

typedef struct __HASH_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    entry *value;
    struct __HASH_ENTRY *next;
} hash_entry;

unsigned int BKDRHash(char *str);
#endif