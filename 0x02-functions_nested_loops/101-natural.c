#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int n, sum1, sum2;
for (n = 1; n < 1024 ; n++)
{
sum1 = n * 3 + (n - 1) * 3;
sum2 = n * 5 + (n - 1) * 3;
}
printf("%d\n", sum1);
printf("%d", sum2);
return (0);
}
