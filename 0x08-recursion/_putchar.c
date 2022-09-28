#include "main.h"
#include <unistd.h>
/**
 * _putchar - write char c to stdout
 * @c: char to print
 *
 * Return: on correct 1.
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
