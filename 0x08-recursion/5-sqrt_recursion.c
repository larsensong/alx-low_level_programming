#include "main.h"
/**
 * helperFunction - checks if sqrt exists
 * @num: number
 * @pSqrt: possible sqrt of no
 *
 * Return: sqrt of no
 */
int helperFunction(int num, int pSqrt)
{
if ((pSqrt * pSqrt) == num)
{
return (pSqrt);
}
else
{
if ((pSqrt * pSqrt) > num)
return (-1);
else
return (helperFunction(num, pSqrt + 1));
}
}
/**
 * _sqrt_recursion - return natural sqrt of a no
 * @n: no to find sqrt for
 *
 * Return: sqrt of no
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
