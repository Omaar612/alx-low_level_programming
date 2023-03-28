#include "main.h"
/**
 * puts2 - print even value.
 *
 *@str:the string
 *
 *@i:the counter of the elements inside the str.
 *
 * Return: Always void.
 */
void puts2(char *str)
{
int i;
for(i = 0; *str != '\0'; *str++)
{
if(*str % 2 == 0)
printf("%c", *str);
}
printf("\n");
}
