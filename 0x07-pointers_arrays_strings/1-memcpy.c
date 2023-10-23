#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: Source parameter to pass in the test
  * @dest: Destination parameter
  *
  * @n: Function parameter
  *
  * Return: Copied memory
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
		return (dest);
}
