#include "main.h"

/**
 * _strpbrk - search a string for bytes
 * @s: string to check
 * @accept: string to chek against
 *
 * Return: pointer to byte that match  NULL
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
	break;
}
if (accept[j])
	return (s + i);
}
return (0);
}
