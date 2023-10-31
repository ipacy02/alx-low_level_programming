#include "main.h"

/**
 * _strdup - copy string to new allocated space in Memory
 * @str: string to be copied
 * Return: pointer to the array
 */
char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' ; i++)
		copy[i] = str[i];
	return (copy);
}

