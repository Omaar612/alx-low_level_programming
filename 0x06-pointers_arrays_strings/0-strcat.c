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
int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

return (dest);
}
