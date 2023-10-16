#include "main.h"

/**
 * swap_int - we are swaping two integers
 * @a: to be checked
 * @b: to be checked
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
