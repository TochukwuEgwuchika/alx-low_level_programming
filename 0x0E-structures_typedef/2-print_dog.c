#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a dog
 * @d: dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s", d->name == NULL ? "(nil)" : d->name, d->age == NULL ? "(nil)" : d->age, d->owner == NULL ? "(nil)" : d->owner;
}
