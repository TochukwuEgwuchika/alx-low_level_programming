#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Description: function to check for uppercase letter
 * Return: 1 if c is uppercase
 * 0 otherwise
 */

int _isupper(int c)
{
	int retval;

	if (c >= 'A' && c <= 'Z')
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}
	return (retval);
}

