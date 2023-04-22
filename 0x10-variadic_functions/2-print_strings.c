#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
int i = n;
int j;
char *str;
va_list s;
if (!n)
	printf("\n");
va_start(s, n);
while (i--)
{
printf("%s%s", (str = va_arg(s, char *)) ? str : "(nil)",
i ? (separator ? separator : "") : "\n");
}
va_end(s);
}
