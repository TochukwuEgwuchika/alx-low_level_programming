#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number whose sign is to be printed
 * Return: 1, 0 or -1
 */

int print_sign(int n)
{
	int retval;

	if (n > 0)
	{
		_putchar('+');
		retval = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		retval = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		retval = -1;
	}
	return (retval);
}
