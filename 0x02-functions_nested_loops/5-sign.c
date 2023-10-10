#include "main.h"
/** _sign(int n) -enter signs
 * Return: 1
 */
int print_sign(int n)
{

	if (n>0)
	{
		_putchar('+');
		return (1);
	}
	else if (n==0)
	{
		_putchar(48);
		return (0);
	}
	else if (n<0)
	{
		_putchar('-');
	}
	return (-1);
}
