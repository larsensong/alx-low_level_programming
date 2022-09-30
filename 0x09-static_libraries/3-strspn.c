#include "main.h"

/**
 * _strspn - gets length of a strin
 * @s: string to check
 * @accept: string to check against
 *
 * Return: no of values in s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
	break;
}
if (!accept[j])
	break;
}
return (i);
}
