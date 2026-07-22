#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure defining basic dog attributes.
 * @name: Pointer to a string representing the name of the dog.
 * @age: Float representing the age of the dog.
 * @owner: Pointer to a string representing the owner's name.
 *
 * Description: Longer description detailing this specific structure
 *              which groups relevant data fields for a canine entity.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
