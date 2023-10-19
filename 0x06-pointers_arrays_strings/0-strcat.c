#include "main.h"

/**
 * _strcat - function that concatenates
 * two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, const char *src)
{
int c, c2;

c = 0;
/* find the size of dest array */
while (dest[c])
c++;

/* iterate through each src array value without the null byte */
for (c2 = 0; src[c2]; c2++)
{
/* append src[c2] to dest[c] while overwriting the null byte in dest */
dest[c] = src[c2];
c++;
}

/* add null terminator at the end of the concatenated string */
dest[c] = '\0';

return (dest);
}