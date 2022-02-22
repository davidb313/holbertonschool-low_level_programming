#include "main.h"

/**
 * puts2 - prints every other character of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
int i, lenght;

lenght = 0;

while (str[lenght] != '\0')
{
lenght++;
}

for (i = 0; i < lenght; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
