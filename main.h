#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* MAIN FUNCTIONS */
int _putchar(char c);
int _strlen(char *s);
int _puts(char *s);
int _printf(const char *format, ...);
int int_handler(int value);
int dec_to_binary(int n);

#endif
