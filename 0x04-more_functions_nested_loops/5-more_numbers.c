#include "main.h"

/**
 * more_numbers - print x10: 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
