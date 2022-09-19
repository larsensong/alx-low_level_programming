#include "main.h"
/**
 * swap_int - function that swap values of two int
 * @a: first value
 * @b: second value
 *
 */
void swap_int(int *a, int *b)
{
int changed;
changed = *a;
*a = *b;
*b = changed;
}
