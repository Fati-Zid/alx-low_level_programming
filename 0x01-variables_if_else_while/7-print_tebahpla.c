#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}

