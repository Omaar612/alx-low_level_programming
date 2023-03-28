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
for(; *str != '\0';)
{
if(*str % 2 == 0)
printf("%c", *str++);
}
printf("\n");
}
