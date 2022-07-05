#include <stdio.h>
#include "main.h"

/**
 * main - print alphabets in lowercase
 * Return: 0 if successful
 */

int main(void)
{
	for (int alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
