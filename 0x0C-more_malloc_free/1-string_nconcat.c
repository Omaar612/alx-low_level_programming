#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* *string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
*
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, len1, len2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (len1 = 0; s1[len1] != '\0'; len1++)
;
for (len2 = 0; s2[len2] != '\0'; len2++)
;
if (n < len1)
s = malloc(1 + n + len1);
else
s = malloc(1 + len1 + len2);
if (s == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
for (j = 0; s2[i] != '\0'; j++)
{
s[i] = s2[j];
i++;
}
s[i] = '\0';
return (s);
}
