#include <stdio.h>
/**
 * main - prints all alphabtes in lowercase except q and e
 * Return: 0 is (successful)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet !== 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
