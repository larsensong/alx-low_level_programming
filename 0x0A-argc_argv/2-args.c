#include <stdio.h>
#include "main.h"
/**
 * main - print name of program
 * @argc: count arguments
 * @argv: argument
 *
 * Return: success 0
 */
int main(int argc, char *argv[])
{
/*declare the variable used*/
int count = 0;
if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
