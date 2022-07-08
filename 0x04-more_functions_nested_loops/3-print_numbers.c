#include "main.h"


/**
 * print_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int number;

	while (number < 10)
	{
		_putchar('0' + number);
	}
	_putchar('\n');
}
