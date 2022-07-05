#include "main.h"

/**
 * main - print alphabets in lowercase
 * Return: 0 if successful
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
