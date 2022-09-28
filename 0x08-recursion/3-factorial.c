#include "main.h"
/**
 * factorial - return factorials of a given no
 * @n: no to find it factorial
 *
 * Return: fatorial of a no
 * -1 if n < 0
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
	return (1);
return (n * factorial(n - 1));
}
