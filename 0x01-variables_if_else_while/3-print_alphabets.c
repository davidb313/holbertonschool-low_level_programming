#include <stdio.h>

/**
 * main - this function prints the lowercase alphabet
 * and the uppercase alphabet
 * adding a new line
 * Return: 0 (success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
