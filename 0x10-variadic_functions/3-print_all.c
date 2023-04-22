#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str;
char *p = "";
va_list ap;
va_start(ap, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
	printf("%s%c", p, va_arg(ap, int));
break;
case 'i':
	printf("%s%d", p, va_arg(ap, int));
break;
case 'f':
	printf("%s%f", p, va_arg(ap, double));
break;
case 's':
str = va_arg(ap, char *);
if (!*str)
str = "(nil)";
printf("%s%s", p, str);
break;
default:
i++;
continue;
}
p = ", ";
i++;
}
}
printf("\n");
va_end(ap);
}
