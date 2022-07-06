#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number whose sign is to be printed
 * Return: 1, 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('=');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
