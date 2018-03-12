#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#define MAX_LAST_NAME_SIZE 16

/* TODO: After modifying the original version, uncomment the following
 * line to set OPT properly */
#define OPT 1
typedef struct __INFOMATION {
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];
} info_entry;

typedef struct __PHONE_BOOK_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    char firstName[16];
    info_entry *infomation;
    struct __PHONE_BOOK_ENTRY *pNext;
} entry;

entry *findName(char lastName[], entry *start, entry *end);
entry *append(char lastName[], entry *e);

#endif
