#include "main.h"

/**
 * _isdigit - checks for a digit (0 to 9)
 * @c : variable to be checked
 * Return: 1 if digit
 * 0 otherwise
 */

int _isdigit(int c)
{
	int retval;

	if (c >= '0' && c <= '9')
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}
	return (retval);
}
