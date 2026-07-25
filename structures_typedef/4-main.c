#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len;
	int owner_len;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	name_len = 0;
	while (name[name_len] != '\0')
		name_len++;

	owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc((name_len + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	i = 0;
	while (name[i] != '\0')
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->name[i] = '\0';

	i = 0;
	while (owner[i] != '\0')
	{
		dog->owner[i] = owner[i];
		i++;
	}
	dog->owner[i] = '\0';

	dog->age = age;

	return (dog);
}
