#include "function_pointers.h"

/**
 * array_iteratior - Executes a function on each array element
 * @array: Aray of integers
 * @size: Numver of elements in the array
 * @action: Function to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while(i < size)
	{
		action(array[i]);
		i++;
	}
}
