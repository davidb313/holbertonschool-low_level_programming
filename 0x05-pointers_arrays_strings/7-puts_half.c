#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
int n;

for (n = 0; str[i]; i++)
;
if (n % 2 == 0)
{
n = n / 2;
}
else
{
n = (n + 1) / 2;
}
for (; str[n]; n++)
{
putchar(str[n]);
}
putchar('\n');
}
