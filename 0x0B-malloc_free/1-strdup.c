#include "main.h"
/**
 * _strlen - count array
 * @s: array
 * Return: sucess
 */
int _strlen(char *s)
{
unsigned int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * _strcpy - copy array
 * @src: array of element
 * @dest: dest of array
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
/**
 * _strdup - array to print string
 * @str: array ofelment
 * Return: pointer
 */
char *_strdup(char *str)
{
char *dest;
unsigned int size;
if (str == 0)
{
return (NULL);
}
size = _strlen(str) + 1;
dst = (char *) malloc(size *sizeof(char));
if (dst == 0)
{
return (NULL);
}
_strcpy(dst, str);
return (dst);
}

