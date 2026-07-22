#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the struct dog variable to initialize.
 * @name: The name string to assign to the dog.
 * @age: The age float to assign to the dog.
 * @owner: The owner string to assign to the dog.
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
