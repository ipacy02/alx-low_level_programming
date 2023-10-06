#include <stdio.h>

/**
 * main - we are going to print from 0 to 9.
 *
 * Return: 0 is always a return
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}

