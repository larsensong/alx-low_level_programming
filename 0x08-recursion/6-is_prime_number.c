#include "main.h"
/**
 * helperFunction - returnns 0 or 1
 * @num: no being checked
 * @i: possible factor of no
 *
 * Return: 0 if no prime
 */
int helperFunction(int num,  int i)
{
if (i < num)
{
if (num % i == 0)
{
return (0);
}
else
{
	return (helperFunction(num, i + 1));
}
}
else
{
return (1);
}
}
/**
 * is_prime_number - checks if no is prime or not
 * @n: no to check
 *
 * Return: 1 if is prime
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
	return (helperFunction(n, 2));
}
}
