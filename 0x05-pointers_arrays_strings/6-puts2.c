#include "main.h"
/**
 * puts2 - print even value.
 *
 *@str:the string
 *
 * Return: Always void.
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] % 2 == 0)
printf("%c", str[i]);
}
printf("\n");
}
