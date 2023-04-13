/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-04-06 - 15:01 +0200
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: split delete test
 */

#include "fonction.h"

Test(split_delete, easy, .signal = SIGSEGV) {
    char **sp;

    sp = split("hello;world;;;;;c la fin", ';');
    split_delete(sp);
    stu_memset(sp[0], 0, sizeof(char));
}
