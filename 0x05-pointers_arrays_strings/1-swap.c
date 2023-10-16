#include "main.h"

/**
 * swap_int - we are swaping two integers
 * @a: to be checked
 * @b: to be checked
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
