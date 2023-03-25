#include "main.h"
/**
 * print_sign - chack if n is positive or negative or 0.
 *
 *@n: input for numbers
 *
 * Return: (0)success, Return (1)otherwise.
 */
int print_sign(int n)
{
if (n > 0)
{	_putchar('+');
return (1);
}
else if (n < 0)
{
	_putchar('-');
return (-1);
}
else
{
	_putchar('0');
	return (0);
}
}
