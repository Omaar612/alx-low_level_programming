#include "main.h"
/**
 * _islower - chack if c is upper.
 *
 *@c: input for alphabet
 *
 * Return: (0)success, Return (1)otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
