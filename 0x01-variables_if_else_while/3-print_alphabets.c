#include <stdio.h>

/**
 * main - prints lower case and upper case alphabets consecutively
 * Return: 0 if (successful)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z', alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
