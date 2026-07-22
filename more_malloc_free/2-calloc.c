#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The byte size of each element.
 *
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, or malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *ptr;
	unsigned int total_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}

	return ((void *)ptr);
}
