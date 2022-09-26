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
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n -1] = b;
n--;
}
return (s);
}
