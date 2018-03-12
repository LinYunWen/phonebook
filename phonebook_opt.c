#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "phonebook_opt.h"

/* TODO: FILL YOUR OWN IMPLEMENTATION HERE! */
entry *findName(char lastName[], hash_entry **table)
{
    int value = BKDRHash(lastName);
    hash_entry *temp = table[value];
    do {
        if (strcmp(temp->lastName, lastName) == 0) {
            return temp->value;
        }
        temp = temp->next;
    } while (temp != NULL);
    return NULL;
}

entry *append(char lastName[], entry *e)
{
    /* allocate memory for the new entry and put lastName */
    e->pNext = (entry *) malloc(sizeof(entry));
    e = e->pNext;
    strcpy(e->lastName, lastName);
    e->pNext = NULL;

    return e;
}
