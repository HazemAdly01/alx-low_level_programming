#include "main.h"

/**
 * _strcat - funcation that concatenates
 * two strings
 *
 * @dest: pointer to destnation input
 * @src: pointr to sorce input
 *
 * retrun: pointer to resulting string @dest
*/

char *_stract(char *dest, char *src)
{
int c, c2;
c = 0;
/* find the sixe of dast arrays */
while (dest[c])
c++;

/* iterate throught each src array value without the null byte */
for (c2 = 0; src[c2] ; c++)
/* append src[c2] to dest[c] while overwriting the null byte in dest */
dest[c++] = src[c2];

return (dest);
}
