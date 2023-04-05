#include <stdio.h>
/**
 * _strlen_recursion - Prints the number of a string.
 * @s: The string to be printed.
 *
 * Return: always 0.
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}
return (i);
}
