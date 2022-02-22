#include "main.h"

/**
 * print_rev - print a reversed string
 * @s - the pointer
 */

void print_rev(char *s)
{
int a, b, lenght;

a = 0;

for (a = 0; s[a] != '\0'; a++);

lenght = a;

for (b = lenght -1; b>= 0; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}
