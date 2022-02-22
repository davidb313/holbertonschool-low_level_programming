#include "main.h"

/**
 * _puts - prints characters an strings
 * @str: pointer to output
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
