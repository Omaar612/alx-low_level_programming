#include "main.h"
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
printf("%c\n", *str++);
}
}
