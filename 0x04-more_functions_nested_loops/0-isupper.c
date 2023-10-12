#include "main.h"
/**
 * _isupper - is the entry point
 * @c: parameter to be checked
 * * Return: 1 and 0
 */

int _isupper(int c)
{
	if (c == 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
