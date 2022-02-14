#include <stdio.h>

/**
* You can only use the putchar function
* All your code should be in the main function
* You can only use putchar twice in your code
*/
int main(void)
{
char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
putchar('\n');
return (0);
}
