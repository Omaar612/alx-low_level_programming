#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i] >= '\0'; i++)
if (*s == accept[i])
{
return (s);
break;
}
s++;
return ('\0');
}
}
