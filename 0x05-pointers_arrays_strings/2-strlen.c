#include "main.h"
#include <string.h>

/**
 * _strlen - calculate the length
 * @s: returns the number if bytes
 * in string pointed to by s
 * Return: length of s
 */

int _strlen(char *s)
{
int n;

n = 0;

for (n = 0; s[n] != '\0'; n++);

return (n);
}
