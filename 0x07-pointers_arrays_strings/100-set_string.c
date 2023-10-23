#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input to use
 * @size: input to use
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum, sum1, y;

	sum = 0;
	sum1 = 0;

	for (y = 0; y < size; y++)
	{
		sum = sum + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum1 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum, sum1);
}

