/*
 * E89 Pedagogical & Technical Lab
 * project:     fonction
 * created on:  2023-02-06 - 17:03 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: fonction
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <signal.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <lapin.h>
#include "struct.h"

#ifndef STU_H_

#define STU_H_

void *stu_memset(void *ptr, char byte, unsigned int n);
char **split(const char *str, char token);
char *stu_strdup(const char *src);
char *stu_strcpy(char *dest, const char *src);
int stu_strlen(const char *str);
void split_delete(char **sp);
void split_print(char **sp);
unsigned int split_size(char **sp);
void split_foreach(char **sp,
                   void (*func)(const char *));
void split_prune(char **sp,
                 int (*predicate)(const char *));
void *stu_memmove(void *dest,
                  const void *src,
                  unsigned int n);

#endif
