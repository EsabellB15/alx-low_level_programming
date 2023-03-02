#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

Char  *_strcat(char *dest, char *src);
Char *_strncat(char *dest, char *src, int n);
Char *_strncpy(char *dest, char *src, int n);
Int _strcmp(char *s1,char *sr);
Void reverse_array(int *a, int n);
Char *string_toupper(char *);
Char *cap_string(char *);
Char *leet(char *);
Char *rot13(char *);
Void print_number(int n);
Char *infinite_add(char *n1, char *n2, char *r, int size_r);
Void print_buffer(char *b, int size);
#endif

