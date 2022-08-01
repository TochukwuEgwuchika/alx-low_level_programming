#include "dog.h"
/**
 * print_dog - prints a dog
 * @d: dog
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s",d->name, d->age, d->owner);
}
