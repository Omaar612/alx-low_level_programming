#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int n, sum[50];
sum[0] = 1;
printf("%d, ", sum[0]);
for (n = 1; n <= 50; n++)
{
sum[n] = sum[n - 1] + sum[n - 2];
if (n != 50)
printf("%d, ", sum[n]);
else
printf("%d", sum[n]);
}
return (0);
}
