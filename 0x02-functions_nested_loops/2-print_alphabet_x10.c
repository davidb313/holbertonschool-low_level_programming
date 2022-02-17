#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 * only use _putchar twice
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int n;
	char ch;

	n = 0;

	while (n < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		n++;
	}
}
