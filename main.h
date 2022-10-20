#ifndef PRINT
#define PRINT

void print_array(int *array, int o);
int _printf(const char *format, ...);
int _print_strin(char *c, int *s, int *i);
int _putchar(char c);
int count_size(int c);
int _bool(const char *format, char *spec, int i);
int _print_number2(int c);

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#endif /*PRINT*/
