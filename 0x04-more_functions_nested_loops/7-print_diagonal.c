#include "main.h"

/**
 * print_diagonal - prints diagonals
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0;
	int leave_blank;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		leave_blank = n - 1;
		while (i < n && i != 1)
		{
			_putchar(" ");
			i++;
		}
		_putchar('\');
	}
}
