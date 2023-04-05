#include <stdio.h>
/**
 * _sqrt1 - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @low: iterator
 * @high: interior
 * Return: the resulting square root
 */
int _sqrt1(int n, int low, int high)
{
if (low > high)
{
return (-1);
}
int mid = (low + high) / 2;
int square = mid * mid;
if (square == n)
{
return (mid);
}
else if (square < n)
{
return (_sqrt1(n, mid + 1, high));
}
else
{
return (_sqrt1(n, low, mid - 1));
}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt1(n, 1, n));
}
}
