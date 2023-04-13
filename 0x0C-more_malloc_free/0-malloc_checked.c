#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *s = malloc(b);
if (*s == NULL || *s == 0)
exit(98);
else
return (*s);
}
