#include "main.h"
#include <stdio.h>

/**
 * swap_int - we are swaping two integers
 * @a: to be checked
 * @b: to be checked
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;

}
