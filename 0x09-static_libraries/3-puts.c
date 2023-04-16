#include "main.h"
#include <stdio.h>
/**
 * _puts - print strings
 *
 *@str:the string that is going to be printed.
 *
 * Return: Always void.
 */
void _puts(char *str)
{
for (; *str != '\0';)
{
printf("%c", *str++);
}
printf("\n");
}
