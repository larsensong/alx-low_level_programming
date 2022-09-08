#include <stdio.h>

/** 
 *  main - Entry point
 *
 *  return: Always 0 as success
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("size of char: %lu byte(S)\n", (unsigned long)sizeof(d));
printf("size of an int: %lu byte(S)\n", (unsigned long)sizeof (a));
printf("size of a long int: %lu byte(S)\n",(unsigned long)sizeof (b));
printf("size of a long long int: %lu byte(S)",(unsigned long)sizeof (c));
printf("size of a float: %lu bute(S)",(unsigned long)sizeof(f));
return (0);
}
