#include "main.h"
#include <stdio.h>

/**
 * main - print no 1 to 100 followed by new line but for mutiplies of 3 prints Fizz
 * instead of number and mutiples of 5 prints BUZZ
 * Return: 0 as sucess
 */
int main(void)
{
int i;
for (i = 1; i <= 100, i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i == 1)
{
printf("%d", i);
}
else
{
printf("%d", i);
}
}
printf("\n");

return (0);
}
