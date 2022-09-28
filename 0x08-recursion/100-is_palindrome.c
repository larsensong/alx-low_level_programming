#include "main.h"
/**
 * _lenght - check lenght of a string
 * @s: is dtring
 * Return:return length of string
 */
int _lenght(char *s)
{
if (*s == '\0')
	return (0);
return (1 + _lenght(s + 1));
}
/**
 * checkp - check if is palindrome
 * @i: is index
 * @lg: length of string
 * @s: the string
 * Return: 1 is palindrome 0 is not
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
{
if (s[i] == s[lg])
{
return (checkp(i + 1, lg - 1, s));
}
else if (s[i] != s[lg])
{
return (0);
}
else
{
return (1);
}
}
return (1);
}
/**
 * is_palindrome - check if string is palindrome
 * @s: is the string
 * Retrun: 1 if palidrome else 0
 */
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
