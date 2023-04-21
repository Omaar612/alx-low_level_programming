#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
int sum = 0, i = n;
if (!n)
{
	printf("\n");
}
va_start(ptr, n);
while (i--)
{
printf("%d", va_arg(ptr, int));
if (!separator && i != n - 1)
	printf("%s", separator);
}
printf("\n");
va_end(ptr);
}