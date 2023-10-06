#include <stdio.h>

/**
 * main - we are printing numbers from 0 to 9.
 *
 * Return: 0 is a return always
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

