#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <stdarg.h>

#include <stdlib.h>

#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
=======
#include<stdarg.h>
#include<stdio.h>
#include <stdint.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _vprintf(const char *format, va_list );
int print_string(va_list);
>>>>>>> 3c2f7e31c95309e31ef5f560437809ea9628f3e5

#endif
