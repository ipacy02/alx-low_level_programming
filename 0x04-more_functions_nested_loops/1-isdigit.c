#include "main.h"
/**
 * _isdigit - main we are using
 * @c: parameter to be checked
 * Return: 1 otherwise 0
 */


int _isdigit(int c)
{
if (c == 0 && c < 9)
	return (1);
else
	return (0);
}
