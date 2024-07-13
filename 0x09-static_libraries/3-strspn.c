#include "main.h"
/**
 * _strspn - Gets the length substring
 * @s: string
 * @accept: prefix
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			if (accept[index] == '\0')
				break;
		}
		s++;
	}
	return (bytes);
}
