#include <unistd.h>

<<<<<<< HEAD
/**

 * _putchar - writes the character c to stdout

 * @c: the character to print

 * Return: 0 on success and -1 error and errno is set appropiately

 */

int _putchar(char c)
  
{
  
  return (write(1, &c, 1));
  
=======


/**
 *
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * 
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

int _putchar(char c)

{

		return (write(1, &c, 1));

>>>>>>> 3c2f7e31c95309e31ef5f560437809ea9628f3e5
}
