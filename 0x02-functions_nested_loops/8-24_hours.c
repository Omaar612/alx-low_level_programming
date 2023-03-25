#include "main.h"
#include <stdio.h>
/**
 *jack_bauer - print every minute.
 *
 * Return: (void)success.
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i < 25; i++)
{
for (j = 0; j < 60; j++)
{
if (i >= 0 && i < 10)
printf("0");
if (j >= 0 && j < 10)
printf("%d:0%d\n", i, j);
else
printf("%d:%d\n", i, j);
}
}
}
