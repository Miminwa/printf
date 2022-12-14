#include "main.h"

#include <stdarg.h>



/**

 * _printf - print a function that produces output according to a format

 * @format: the format string

 *

 * Return: the number of characters printed

 */



int _printf(const char *format, ...)

{

  int i = 0;

  int printed = 0;

  va_list args;



  va_start(args, format);

  while (format[i])

    {

      while (format[i] == '%')

	{

	  switch (format[i + 1])

	    {

	    case 's':

	      printed += print_string(args);

	      i += 2;

	      break;

	    default:

	      _putchar(format[i]);

	      _putchar(format[i + 1]);

	      i += 2;

	    }

	}

    }



  if (format[i])

    {

      _putchar(format[i]);

      printed++;

      i++;

    }



  return (printed);

}#include "main.h"
#include <stdarg.h>

/**
 * _printf - print a function that produces output according to a format
 * @format: the format string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int printed = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 's':
				printed += print_string(args);
				i += 2;
				break;
			default:
			    
