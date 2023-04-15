#include<stdlib.h>
#include<stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}
/**
* _strlen - returns the length of a string
* @s: string to evaluate
*
* Return: the length of the string
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * *multiply - multiplies two positive numbers
 * @num1: number of arguments
 * @num2: array of arguments
 *
 * Return: always result (Success)
 */
int *multiply(char *num1, char *num2)
{
int len1, len2, len_total, i, carry, digit1, digit2, *result;
len1 = _strlen(num1);
len2 = _strlen(num2);
len_total = len1 + len2 + 1;
result = malloc(sizeof(int) * len_total);
if (!result)
return (NULL);
for (i = 0; i <= len1 + len2; i++)
result[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = num1[len1] - '0';
carry = 0;
for (len2 = _strlen(num2) - 1; len2 >= 0; len2--)
{
digit2 = num2[len2] - '0';
carry += result[len1 + len2 + 1] + (digit1 *digit2);
result[len1 + len2 + 1] = carry % 10;
carry /= 10;
}
if (carry)
result[len1 + len2 + 1] += carry;
}
return (result);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, *result;
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
errors();
result = multiply(argv[1], argv[2]);
if (!result)
errors();
i = 0;
while (result[i] == 0 && i < _strlen(argv[1]) + _strlen(argv[2]) - 1)
i++;
for (; i < _strlen(argv[1]) + _strlen(argv[2]); i++)
printf("%d", result[i]);
printf("\n");
free(result);
return (0);
}
