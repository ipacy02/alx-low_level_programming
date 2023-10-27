#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: where memory is stored
 *@src: memory to copy memory from
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int u = 0;
	int i = n;


	for (; u < i; u++)
	{
		dest[u] = src[u];
		n--;
	}
	return (dest);
}

