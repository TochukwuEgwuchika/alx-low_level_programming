#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : number whose last digit is to be printed
 * Return: 0 or 1
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;
	_putchar(last + '0');

	return (last);
}
