#include <stdio.h>
/**
 * *_strcat - completing a string with another one
 *
 *@dest:the first string.
 *
 *@src:the second string.
 *
 * Return: Always dest.
 */
char *_strcat(char *dest, char *src)
{
*dest = *dest + *src;
return (*dest);
}
