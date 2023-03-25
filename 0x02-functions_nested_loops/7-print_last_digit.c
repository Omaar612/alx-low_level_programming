#include "main.h"
/**
 * print_last_digit - chack for the last digit.
 *
 *@c: input for numbers
 *
 * Return: (c)success.
 */
int print_last_digit(int c)
{
int x;
if (c < 0)
{
c = -c;
}
x = c % 10;
if (x < 0)
{
x = -x;
}
_putchar(x + '0');
return (x);
}
