/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-03-24 - 14:45 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: split list
 */

#include "fonction.h"

unsigned int split_size(char **sp)
{
    int count;

    count = 0;
    while(sp[count] != NULL) {
        count += 1;
    }
    return count;
}
