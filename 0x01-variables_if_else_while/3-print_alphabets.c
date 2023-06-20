#include <stdio.h>

/**
 *print alphabet3
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopdtwjwxyzABCDEFGHIJKLkdxjsWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}

