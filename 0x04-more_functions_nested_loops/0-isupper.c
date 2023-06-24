#include "main.h"

/**
 * @chr: char to check
 *
 * Return: 0 or 1 (true/false)
 */

int _isupper(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
		return (1);
	else
		return (0);
}

