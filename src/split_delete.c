/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-03-24 - 14:47 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: split delete
 */

#include "fonction.h"

void split_delete(char **sp)
{
    int size;
    int count;

    size = split_size(sp);
    count = 0;
    while(count != size) {
        free(sp[count]);
        count += 1;
    }
    free(sp);
}
