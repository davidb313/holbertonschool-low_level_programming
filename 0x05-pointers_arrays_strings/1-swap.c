#include "main.h"

/**
 * void swap_int - function to swap two integers
 * @a: integer number 1
 * @b: integer number 2
 */

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
