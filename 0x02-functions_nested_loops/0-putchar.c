#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Succes)
*/

int main(void)
{
char str[] = "_putchar";
int ch;

for (ch = 0; ch < 8; ch++)
_outchar(str[ch]);
_putchar('\n');

return (0);
}