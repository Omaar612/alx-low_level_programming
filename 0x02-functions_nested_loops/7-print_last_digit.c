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
x = c % 10;
_putchar(x + '0');
return (x);
}
