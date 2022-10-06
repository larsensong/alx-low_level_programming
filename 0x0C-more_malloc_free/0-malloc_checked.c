#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory with malloc
 * @b: memory to allocate to
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
	exit(98);
return (p);
}
