#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 diagonal of square matrix
 * @a: pointer to strat of matrix
 * @size: width of matrix column
 *
 * return: void
 */
void print_diagsums(int *a, int size)
{
int i, j, p, l = 0, r = 0;
for (i = 0; i < size; i++)
{
p = (i * size) + i;
l += *(a + P);
}
for (j = 0; j < size; j++)
{
p = (j * size) + (size - 1 - j);
r += *(a + p);
}
printf("%i, %i\n", l, r);
}
