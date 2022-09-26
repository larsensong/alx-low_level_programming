#include "main.h"
/**
 * _memset - fills the 1 byte pointed by a pointer
 * @s: pointer to memory area to fill
 * @c: char to fill memory area
 * @n: no of byte to fill
 *
 * Return: Pointer to fill
 *
 */
void *_memset(void *s, int c, size_t n)
{
unsigned int index;
unsigned char *memory = s, value = c;
for (index = 0; index < n; index++)
	memory[index] = value;
return (memory);
}
