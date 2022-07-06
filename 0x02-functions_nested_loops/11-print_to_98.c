#include "main.h"

/**
 * print_to_98 - prints all batural numbers from n to 98
 * @n: start number
 * Return void
 */

void print_to_98(int n)
{
	int startnum;

	for (startnum = n; startnum <= 98; startnum++)
	{
		if (startnum == 98)
		{
			printf("%d", startnum);
		}
		else
		{
			printf("%d, ", startnum);
		}
	}
}
				
