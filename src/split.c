/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-03-22 - 10:56 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: split
 */

#include "fonction.h"

static int stu_charlen(const char *src, char token)
{
    int count;
    int nb;

    count = 0;
    nb = 0;
    while (src[count] != '\0') {
        if (src[count] == token) {
            nb += 1;
        }
        count += 1;
    }
    return nb;
}

static char *stu_strsplitcpy(char *dest, const char *src, char token)
{
    unsigned int count;

    count = 0;
    while (src[count] != '\0' && src[count] != token) {
        dest[count] = src[count];
        count += 1;
    }
    dest[count] = '\0';
    return dest;
}


static int stu_strsplitlen(char *str, char token)
{
    int count;

    count = 0;
    while (str[count] != '\0') {
        if (str[count] == token) {
            return count;
        }
        count += 1;
    }
    return count;
}

char **split(const char *str, char token)
{
    char **sp;
    char *sp_str;
    int i;
    int c_nb;
    int tc_nb;

    i = 0;
    c_nb = 0;
    tc_nb = 0;
    sp_str = stu_strdup(str);
    sp = malloc(sizeof(char *) * stu_charlen(str, token) * 2);
    while (i != stu_charlen(str, token) + 1) {
        c_nb = stu_strsplitlen(sp_str + tc_nb, token);
        sp[i] = malloc(sizeof(char) * c_nb + 1);
        stu_strsplitcpy(sp[i], sp_str + tc_nb, token);
        tc_nb += c_nb + 1;
        i += 1;
    }
    return sp;
}
