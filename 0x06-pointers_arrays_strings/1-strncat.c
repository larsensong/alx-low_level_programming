#include "main.h"
/**
 * _strncat - concatenates 2 strings and inputted byte
 * @dest: string to append to
 * @src: string to complete
 * @n: integer to compare index
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
	dest_len++;
for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
return (dest);
}
