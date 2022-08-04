#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: nnumber of arguments
 * @...: other arguments
 *
 * Return - void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}

void main()
{
	print_numbers("#", 4, 1,2,4,6);
}
