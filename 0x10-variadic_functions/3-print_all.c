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
char *str, *ptr = "";
va_list ap;
va_start(ap, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
	printf("%s%c", *ptr, va_arg(ap, int));
break;
case 'i':
	printf("%s%d", *ptr, va_arg(ap, int));
break;
case 'f':
	printf("%s%f", *ptr, va_arg(ap, double));
break;
case 's':
if (!*str)
printf("nil");
break;
printf("%s%s", *ptr, va_arg(ap, char *));
break;
default:
i++;
continue;
}
ptr = ",";
i++;
}
}
printf("\n");
va_end(ap);
}
