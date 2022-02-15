#include <stdio.h>

/**
 * main - prints all numbers in base 16,
 * followed by a new line
 * only use putchar three times
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
