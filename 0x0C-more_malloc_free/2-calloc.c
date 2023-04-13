#include <stdlib.h>
#include "main.h"
/**
**_memset - fills memory with a constant byte
*@s: memory area to be filled
*@b: char to copy
*@n: number of times to copy b
*Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
**_calloc - allocates memory for an array
*@nmemb: number of elements in the array
*@size: size of each element
*Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;
if (size == 0 || size == NULL)
return (NULL);
m = malloc(nmemb * size);
if (m == 0)
return (NULL);
_memset(m, 0, sizeof(int) * nmemb);
return (m);
}
