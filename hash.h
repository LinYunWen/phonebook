#ifndef _HASH_H
#define _HASH_H

#define MAX_LAST_NAME_SIZE 16

typedef struct __HASH_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    entry *value;
    struct __HASH_ENTRY *next;
} hash_entry;

int BKDRHash(char *str);
hash_entry* hash_linear_append(char lastName[], entry *value, hash_entry *block);
#endif