#include "main.h"
/**
 * print_char - print a char
 *@args: always 1
 *
 *Return: always 1
 */

int print_char(va_list arg)
{
  _putchar(va_arg(arg, int));
return (1);
}
