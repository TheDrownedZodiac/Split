/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-03-24 - 14:56 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: split print
 */

#include "fonction.h"

void split_print(char **sp)
{
    int size;
    int count;

    size = split_size(sp);
    count = 0;
    while(count != size) {
        if (sp[count] != NULL) {
            write(1, sp[count], stu_strlen(sp[count]));
            write(1, "\n", 1);
        }
        count += 1;
    }
}
