#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print mutplivation of int
 * @argc: argument to count
 * @argv: arguments
 *
 * Return: o if true else 1
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);

return (0);
}
printf("error\n");
return (1);
}
