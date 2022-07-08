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
		for (i = 0; i < n; i++)
		{
			for (leave_blank = 0; leave_blank < i; leave_blank++)
			{
				_putchar(' ');
			}
			_putchar('\');
		}
	}
}
