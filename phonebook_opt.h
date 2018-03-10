#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#define MAX_LAST_NAME_SIZE 16

/* TODO: After modifying the original version, uncomment the following
 * line to set OPT properly */
#define OPT 1
typedef struct __PHONE_BOOK_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    char firstName[16];
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];
    struct __PHONE_BOOK_ENTRY *pNext;
} entry;

typedef struct __HASH_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    entry *value;
    struct __HASH_ENTRY *tail;
    struct __HASH_ENTRY *next;
} hash_entry;

entry *findName(char lastName[], hash_entry **table);
entry *append(char lastName[], entry *e);
int BKDRHash(char *str);
hash_entry* hash_linear_append(char lastName[], entry *value, hash_entry *block);

#endif
