#include "main.h"

/**
 * print_array - prints half of string
 * @a: string to be printed
 * @n: number of element of printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d",  a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
