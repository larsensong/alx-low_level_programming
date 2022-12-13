#include "main.h"
/**
 * _strcpy - copies a function pointed by a variable
 * @dest: destination
 * @src: The copied variable
 *
 * Return: Return the copy
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
