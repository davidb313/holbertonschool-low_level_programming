#include "main.h"

/**
 * print_rev - print a reversed string
 * @s - the pointer
 */

void print_rev(char *s)
{
int lenght;
lenght = strlen(str);

int i;
i = 0;

for (i = lenght -1; i>= 0; i--)
{
if (str[i] == ' ')
{
str[i] = '\0';
_putchar('%s', str);
}
_putchar('\n');
}

