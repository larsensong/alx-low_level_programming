#include "main.h"
/**
 * _strncpy - copy a string as per strncpy function
 * @dest: buffer to store the copy
 * @src: source string
 * @n: max value copied
 * Return: return copied value
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
for ( ; i < n; i++)
	dest[i] = '\0';
return (dest);
}
