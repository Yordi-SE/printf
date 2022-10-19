#ifndef PRINT
#define PRINT

int _printf(const char *format, ...);
int _print_strin(char *c, int *s, int *i);
int _putchar(char c);
int count_size(long int c);
int _bool(const char *format, char *spec, int i);
int _print_number2(long int c);

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#endif /*PRINT*/
