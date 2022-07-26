#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: 0
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	char *new;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}


	new = malloc(i * sizeof(char));

	if (new  == NULL)
	{
		return (NULL);
	}
	else
	{
		new = str;
		return new;
	}
}
