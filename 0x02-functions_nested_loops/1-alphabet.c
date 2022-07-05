#include "main.h"

/**
 * main - print alphabets in lowercase
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	for (alphabet; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
