#include  <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 *Return: Always 0 sucess
 */
int main()
{
	int t1 = 0, t2;
	while(t <= 9)
	{
		if (t1 != t2 && t1 < t2)
		{
			putchar(t1 + 48);
			putchar(t2 + 48);

			if (t1 + t2 != 17)
			{
			  putchar(',');
			  putchar(' ');
			}
		}
	}
		return 0;
}
