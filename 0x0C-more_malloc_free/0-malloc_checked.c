#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked - does what malloc does and checks if null
 * @b: size to alloc for malloc
 *
 * Return: void pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
