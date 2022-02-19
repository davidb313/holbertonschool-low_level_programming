#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Returns all possible different combinations
 * of two digits, separated by comma
 * Return: 0
 */
int main(void)
{
int i, j;
for (i = 48 ; i < 57; i++)
{
j = i + 1;
while (j < 58)
{
putchar(i);
putchar(j);
if (i != 56)
{
putchar(44);
putchar(32); }
j++;
}
}
putchar(10);
return (0);
}
