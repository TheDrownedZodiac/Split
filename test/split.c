/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-03-22 - 10:58 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: test split
 */

#include "fonction.h"

Test(split, easy)
{
    char **sp;

    sp = split("hello;world;le test;1; c la fin", ';');
    split_print(sp);
    cr_assert_str_eq(sp[0], "hello");
    cr_assert_str_eq(sp[1], "world");
    cr_assert_not(sp[6]);
    split_delete(sp);
}

Test(split, normal)
{
    char **sp;

    sp = split("hello;world;;;;;c la fin", ';');
    split_print(sp);
    cr_assert_str_eq(sp[0], "hello");
    cr_assert_str_eq(sp[1], "world");
    cr_assert_str_eq(sp[6], "c la fin");
    cr_assert_not(sp[7]);
    split_delete(sp);
}
