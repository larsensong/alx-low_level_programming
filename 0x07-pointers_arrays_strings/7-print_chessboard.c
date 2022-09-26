#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: pointer to what to print
 *
 * Return: NULL
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (i = 0; j < 8; j++)
{
	_putchar(a[i][j]);
}
_putchar('\n');
}
}
