#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
	{
		d->name = "nil";
	}
	else if ((*d).owner == NULL)
	{
		d->owner = "nil";
	}
	printf("name: %s\n, age: %f\n, owner: %s\n", (*d).name, d->age, (*d).owner);
}
