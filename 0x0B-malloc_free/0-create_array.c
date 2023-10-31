#include "main.h"

/**
 * create_array - create an arrray
 * @size: size of an array to be checked on
 * @c: character that we will store in array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size ; i++)
		arr[i] = c;
	return (arr);

}

