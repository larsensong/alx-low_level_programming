#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - finds the len string
 * @str: string to be measured
 * Return: len of string
 */
int _strlen(char *str)
{
int len = 0;
while (*str++)
	len++;
return (len);
}
/**
 * _strcopy - copies a string pointed by src
 * @odest: buffer to store copy
 * @src: source
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
int index = 0;
for (index = 0; src[index]; index++)
	dest[index] = src[index];
dest[index] = '\0';
return (dest);
}
/**
 * new_dog - create a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *rex;
if (name == NULL || age < 0 || owner == NULL)
	return (NULL);
rex = malloc(sizeof(dog_t));
if (rex == NULL)
	return (NULL);
rex->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (rex->name == NULL)
{
	free(rex);
	return (NULL);
}
rex->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (rex->owner == NULL)
{
	free(rex->name);
	free(rex);
	return (NULL);
}
rex->name = _strcopy(rex->name, name);
rex->age = age;
rex->owner = _strcopy(rex->owner, owner);
return (rex);
}
