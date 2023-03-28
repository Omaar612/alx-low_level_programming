#include "main.h"
/**
 * _strlen - counting the length of the string.
 *
 *@s:taking a string
 *
 * Return: Always s.
 */
int _strlen(char *s)
{
int i;
for (i = 0; *s != '\0'; s++)
{
i++;
}
return (i);
}
