#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - converts bonary number to decimal
 * @b: number to be converted
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	if (b == NULL)
	{
		return 0;
	}
	while (b[i] != '\0')
	{
		if (((b[i] > 65) && (b[i] < 91)) | ((b[i] > 97) && (b[i] < 122)))
		{
			return 0;
		}
		i++;
	}

	int length = strlen(b);
	int len = strlen(b);
	int sum;

	for (i = 0; i < length; i++)
	{
		sum += ((b[i] - '0') * pow(2, --len));
	}
	return sum;
}

int main(void)
{
	printf("%d", binary_to_uint("101"));
}
