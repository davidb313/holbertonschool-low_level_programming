#include "main.h"
/**
 * print_last_digit -  funtion that prints
 * the last digit of a number n
 * @n: int type intiger
 * Return: 0
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	n = n * -1;
	_putchar(n + '0');
	return (n % 10);
}
