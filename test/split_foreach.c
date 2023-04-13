/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-04-05 - 10:45 +0200
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: test split foreach
 */

#include "fonction.h"

void stu_puts(const char *str)
{
    write(1, str, stu_strlen(str));
    write(1, "\n", 1);
}


Test (split_foreach, easy) {
    char **sp;

    sp = split("hello;world;le test;1; c la fin", ';');
    split_foreach(sp, stu_puts);
    split_delete(sp);
}

Test (split_foreach, normal) {
    char **sp;

    sp = split("hello;world;;;;;;;le; c la fin", ';');
    split_foreach(sp, stu_puts);
    split_delete(sp);
}
