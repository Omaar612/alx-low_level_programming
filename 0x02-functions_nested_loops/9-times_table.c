#include "main.h"
#include <stdio.h>
/**
 *time_table - print time table.
 *
 * Return: (void)success.
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j == 9)
printf("%d", i * j);
else
printf("%d,  ", i * j);
}
printf("\n");
}
}
