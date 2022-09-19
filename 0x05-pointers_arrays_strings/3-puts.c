#include "main.h"

/**
 * void _puts - print a string and a line to stdout.
 *
 * @str: Input string
 *
 */

void _puts(char *str)
{
int index;
for  (index = 0; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
