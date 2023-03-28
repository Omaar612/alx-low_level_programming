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
int i;
for(i = 0; *str != '\0'; *str++)
{
printf("%c",*str);
}
}
