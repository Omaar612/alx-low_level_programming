#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);
for (i = 0; haystack[i] >= '\0'; i++)
{
if (needle[i] == haystack[i])
{
return (needle);
}
}
return ('\0');
}
