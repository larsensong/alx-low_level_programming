#include "main.h"

/**
 * _isupper - checks if is uppercase
 * @c: character tested
 * Return: return 1 or 0
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
return (0);
}
