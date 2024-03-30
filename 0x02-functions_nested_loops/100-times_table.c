#include "main.h"

/**
 * print_times_table -  function that prints the n times table,
 * starting with 0.
 * @n: The number to be declared
 *
 * Return: n
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 14)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(k + '0');
				}
			}
			_putchar('\n');
		}
	}
}
