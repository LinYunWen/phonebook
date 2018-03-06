#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "phonebook_opt.h"

/* TODO: FILL YOUR OWN IMPLEMENTATION HERE! */
entry *findName(char lastName[], entry *start, entry *end)
{
    if (start == NULL) {
        return NULL;
    }

    while (start != end) {
        if (strcasecmp(lastName, start->lastName) == 0)
            return start;
        start = start->pNext;
    }

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
