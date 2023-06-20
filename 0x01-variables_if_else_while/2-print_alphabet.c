#include <stdio.h>

int main(void)
{
	char alp[26] = "qwertyuiopasdfghjklzxcvbnm";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}

