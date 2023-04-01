#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
int j = 0;
unsigned int i = 0;
for (; *s >= '\0'; s++)
{
for (; s[j] >= '\0'; j++)
{
if (accept[j] == *s)
{
i++;
break;
}
else if (accept[j + 1] == '\0')
return (i);
}
}
return (0);
}
