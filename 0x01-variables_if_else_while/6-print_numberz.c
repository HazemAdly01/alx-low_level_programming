#include <stdio.h>

/**
 * main - entry point
 *
 * description: print 0-9 using putchar
 * wile using int varible
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int digit = 0;

while (digit <= 9)
{
putchr(digit + '0');
digit++;
}
putchar('\n');

return 0;
}
