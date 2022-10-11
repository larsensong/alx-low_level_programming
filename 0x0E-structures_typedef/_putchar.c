#include <unistd.h>
/**
 * _putchar - write c to stdout
 * @c: char to print
 *
 * Return: on sucess 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
