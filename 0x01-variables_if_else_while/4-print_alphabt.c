#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line,
 * Print all the letters except q and e
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');

return (0);
}
