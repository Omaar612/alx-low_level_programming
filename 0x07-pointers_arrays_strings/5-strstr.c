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
for (i = 0; haystack[i] >= '\0';)
{
if (needle[i] == haystack[i])
{
return (needle);
}
do {
if (needle[i + 1] == '\0')
{
return (haystack);
}
i++;
}
while (haystack[i] == needle[i]);
haystack++;
}
return ('\0');
}
