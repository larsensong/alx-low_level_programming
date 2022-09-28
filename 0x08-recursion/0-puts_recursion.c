#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: pointer back to memory to fill
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar (*s);
_puts_recursions(s + 1);
}
