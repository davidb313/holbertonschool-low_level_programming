#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int a, b;

/* inicialize poointers */
a = 0;
b = 0;

/* move to end of dest */
while (dest[a] != '\0')
a++;

/* copy the second string to first string */
while (src[b] != '\0')
{
dest[a] = dest[b];
a++;
b++;
}
dest[a] = '\0';

return (dest);
}
