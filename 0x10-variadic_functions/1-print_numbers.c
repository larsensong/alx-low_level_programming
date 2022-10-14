#include "vardiac_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print no
 * @separator: string to print btwn no
 * @n: no of inter passed to function
 * @...: no of no to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;
va_start(nums, n);
for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));
if (index != (n - 1) && separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(nums);
}
