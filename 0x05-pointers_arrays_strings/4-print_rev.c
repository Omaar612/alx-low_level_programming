#include "main.h"
/**
 * _print_rev - prints the string reversed.
 *
 *@s:the string that is going to be reversed.
 *
 * Return: Always void.
 */
void _print_rev(char *s)
{
int i;
while (s[i])
{
i++;
}
while (i--)
{
printf("%c", s[i]);
}
}
