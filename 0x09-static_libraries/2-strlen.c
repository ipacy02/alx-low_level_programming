#include "main.h"
/**
 * _strlen - returns the length of a string to the output
 * @s: string to be used
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}

