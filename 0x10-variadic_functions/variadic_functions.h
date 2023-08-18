#ifndef HEADER_VARIADIC_FUNC
#define HEADER_VARIADIC_FUNC

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
typedef struct Print_format
{
    char *s;
    void (*func)();
} Print_f;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
