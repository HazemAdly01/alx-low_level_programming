#include "main.h"

/**
 * print_numbers - prints numbers 0-9 using _putchar twice
 *
 * Return: void
*/

void print_numbers(void)
{
int num = 0;

while (num >= 0 && num <= 9)
{
_putchar(num + '0');
num++;
}
_putchar('\n');
}
