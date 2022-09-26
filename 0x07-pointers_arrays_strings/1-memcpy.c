#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to copy
 * @src: area to copy from
 * @n: no of byte to copy
 *
 * Return: pointer copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
