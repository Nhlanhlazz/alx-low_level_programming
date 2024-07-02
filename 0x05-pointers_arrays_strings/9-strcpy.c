#include "main.h"

/**
 * _strcpy - copies a string  including the null-terminating byte to a buffer
 * @dest: destination buffer where a string is copied
 * @src: source string to be copied
 *
 * Return: pointer to 'dest'.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
