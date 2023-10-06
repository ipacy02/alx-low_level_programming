#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - what we are doing now is to print alphabets with q and e.
 *
 * Return: Always 0 is a return
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

