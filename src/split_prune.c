/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-04-05 - 11:40 +0200
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: split prune
 */

#include "fonction.h"

void swap_str(char **str_1, char **str_2)
{
    char *old;

    old = *str_1;
    *str_1 = *str_2;
    *str_2 = old;
}

void split_prune(char **sp,
                 int (*predicate)(const char *))
{
    int count;
    int size;
    int state;
    int pos;

    count = 0;
    state = 0;
    size = split_size(sp);
    while (count != size) {
        if (predicate(sp[count]) == 1 && state == 0) {
            pos = count;
            state = 1;
        }
        if (predicate(sp[count]) == 0 && state == 1) {
            swap_str(&sp[pos], &sp[count]);
            pos += 1;
        }
        count += 1;
    }
    while (pos != size) {
        free(sp[pos]);
        sp[pos] = NULL;
        pos += 1;
    }
}
