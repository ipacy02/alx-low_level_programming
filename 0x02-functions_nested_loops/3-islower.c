#include "main.h"

/**
 * _islower - is the starting point
 * @c: the parameter to be checked
 * Return: 1 if condition is true and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
