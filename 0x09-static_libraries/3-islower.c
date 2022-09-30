#include "main.h"
/**
 * _islower - function that checks for lower case character
 * &c: is the int that will use for the argument of function
 * Return: 0
 */
int _islower(int c)
{	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return(0);
}
