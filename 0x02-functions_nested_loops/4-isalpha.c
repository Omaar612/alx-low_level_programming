#include "main.h"
/**
 * _isalpha - chack if c is upper or lower.
 *
 *@c: input for alphabet
 *
 * Return: (0)success, Return (1)otherwise.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
