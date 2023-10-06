#include <stdio.h>

/**
 * main - we are prining lowercase in reverse,
 * followed by a new line
 * Return: Always 0 is returned
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

