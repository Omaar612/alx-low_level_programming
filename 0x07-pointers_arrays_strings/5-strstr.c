#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] >= '\0'; i++)
{
for (j = 0; needle[i] >= '\0'; j++)
if (needle[j] == haystack[j])
{
return (needle);
break;
}
}
return (0);
}
