#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each array element.
 * @array: Array of integers.
 * @size: Number of elements in the array.
 * @action: Function to execute on each element.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
