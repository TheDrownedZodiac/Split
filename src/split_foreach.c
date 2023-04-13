/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-04-05 - 10:28 +0200
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: split foreach
 */

#include "fonction.h"

void split_foreach(char **sp,
                   void (*func)(const char *))
{
    int count;
    int size;

    count = 0;
    size = split_size(sp);
    while (count != size) {
        if (sp[count] != NULL) {
            func(sp[count]);
        }
        count += 1;
    }
}
