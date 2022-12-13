#include "main.h"

/**
 * _memset - fills a memory with abyte
 * @s: pointer to memory area to fill
 * @b: char to fill memory area
 * @n: no of byte to fill
 *
 * Return: Pointer to fill
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
