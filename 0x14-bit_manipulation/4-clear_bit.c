#include "main.h"
/**
 * clear_bit - sets a value of index to bit 0
 * @n: pointer to the bit
 * @index: index to the set value and it starts from 0
 * Return: on sucess 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
	return (-1);
*n &= ~(1 << index);
return (1);
}
