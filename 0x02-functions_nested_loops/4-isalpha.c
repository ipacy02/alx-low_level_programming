#include "main.h"

/**
 * _isalpha - main starting point
 * @c: Parameter to be checked
 * Return: 1 if it is a letter 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||( c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
