#include <stdio.h>
/**
 * main - print all single digit base 10 starting from 0
 * Return: 0 is (successful)
 */
int main(void)
{
	int num1;
	
	for(num1 = 0; num1 < 10; num1++)
	{
		printf("%d", num1);
	}
	putchar('\n');
	return (0);
}
