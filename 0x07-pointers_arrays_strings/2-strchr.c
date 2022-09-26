#include "main.h"

/**
 * _strchr - locates a char to string
 * @s: string to check
 * @c: char to check for
 *
 * Return: pointer to spot
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
	return (s + i);
}
if (*(s + i) == c)
	return (s + i);
return (0);
}
