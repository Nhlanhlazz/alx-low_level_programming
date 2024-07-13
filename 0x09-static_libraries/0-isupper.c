#include "main.h"

/**
 * _issuper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _issuper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
