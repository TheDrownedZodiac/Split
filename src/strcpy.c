/*
 * E89 Pedagogical & Technical Lab
 * project:     printf
 * created on:  2022-10-26 - 16:33 +0200
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: copy
 */

#include <stddef.h>

char *stu_strcpy(char *dest, const char *src)
{
    int count;

    if (src == NULL) {
        return NULL;
    }
    count = 0;
    while (src[count] != '\0') {
        dest[count] = src[count];
        count += 1;
    }
    dest[count] = '\0';
    return dest;
}
