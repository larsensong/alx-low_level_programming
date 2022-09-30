#include "main.h"

/**
 * _puts - print a string and a line to stdout.
 *
 * @str: Input string
 *
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
