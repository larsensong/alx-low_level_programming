#include "main.h"
/**
 * set_bit - sets value of bit to a given no
 * @n: pointer to the bit
 * @index: index to  the set value
 * Return: on sucess 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
	return (-1);
*n ^= (1 << index);
return (1);
}
