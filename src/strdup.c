/*
 * E89 Pedagogical & Technical Lab
 * project:     exam
 * created on:  2022-12-01 - 09:18 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: strdup
 */

#include <stdlib.h>

char *stu_strcpy(char *dest, const char *src);
int stu_strlen(const char *str);

char *stu_strdup(const char *src)
{
    char *str;

    str = malloc(sizeof(char) * stu_strlen(src) + 1);
    if (str == NULL) {
        return NULL;
    }
    stu_strcpy(str, src);
    return str;
}
