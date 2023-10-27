#include "main.h"


/**
 * _puts - program prints a string
 * @str: the string to be printed now
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
