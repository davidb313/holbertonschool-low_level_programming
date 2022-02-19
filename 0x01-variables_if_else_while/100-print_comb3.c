#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, m;

	for (i = 48; i <= 57; i++)
	{
		for (m = 48; m <= 57; m++)
		{
			putchar(i);
			putchar(m);
			if (i != 57 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
