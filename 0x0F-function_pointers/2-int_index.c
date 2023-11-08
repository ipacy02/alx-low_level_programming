#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to be checked into
 * @size: size of an array
 * @cmp: function pointers
 * Return: index of the matched or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) == 1)
			return (k);
	}
	return (-1);


}
