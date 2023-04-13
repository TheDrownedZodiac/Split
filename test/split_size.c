/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-04-06 - 15:15 +0200
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: test split size
 */

#include "fonction.h"

Test(split_size, normal)
{
    char **sp;

    sp = split("hello;world;;;;;c la fin", ';');
    cr_assert_eq(split_size(sp), 7);
    split_delete(sp);
}
