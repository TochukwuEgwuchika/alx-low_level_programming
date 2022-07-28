#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: space to be allocated
 *
 * Return: pointer is sucessful
 */

void *malloc_checked(unsigned int b)
{
	int *p;
	
	p = malloc(b);

	if (p == NULL)
	{
		return (98);
	}
	else
	{
		return p;
	}
}
