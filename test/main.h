#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<stdio.h>
#include <stdint.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _vprintf(const char *format, va_list );
int print_string(va_list);

#endif