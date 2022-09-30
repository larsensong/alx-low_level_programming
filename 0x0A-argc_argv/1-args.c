#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: sucess 0
 */
int main(int argc, char *argv[])
{
(void) argv;/** to ignore **/
printf("%i\n", argc - 1);

return (0);
}
