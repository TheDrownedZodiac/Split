/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-04-05 - 11:46 +0200
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: split prune test
 */

#include "fonction.h"

int foo(const char *str)
{
    return !*str;
}

Test (split_prune, easy) {
    char **sp;

    sp = split("salut,,martin,,,,,,,,,,,,,&&,noah", ',');
    split_prune(sp, foo);
    cr_assert_str_eq(sp[0], "salut");
    cr_assert_str_eq(sp[1], "martin");
    cr_assert_str_eq(sp[2], "&&");
    cr_assert_str_eq(sp[3], "noah");
    split_print(sp);
    split_delete(sp);
}
