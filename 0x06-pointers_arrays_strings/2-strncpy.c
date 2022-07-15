#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: ptr
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
