#include <stdio.h>
/**
 * main - entry point
 *
 * This code will print all posibile values of two digits in ascending order meanwhile
 * being separated by a comma and a space
 *
 * Return: Always 0 (correct)
 */
int main(void)
{
int digit1, digit2, digit3;
for (digit1 = 0; digit1 < 9; digit1++)
{
	for (digit2 = digit1 + 1; digit2 < 10; digit2++)
	{
		for (digit3 = digit2 + 1; digit3 < 10; digit3++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');
			putchar((digit3 % 10) + '0');

			if (digit1 == 7 && digit2 == 8 && digit3 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
retrun (0);
}
