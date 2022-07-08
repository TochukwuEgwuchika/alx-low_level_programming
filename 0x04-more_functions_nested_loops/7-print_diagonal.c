#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonals
 *
 * @n: number of diagonals
 *
 * Description: prints diagonals with _putchar
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
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
