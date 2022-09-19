#include "main.h"
/**
 * _puts - print a sting and a line
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
_putchar('\n')
}
