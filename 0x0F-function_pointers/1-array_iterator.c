#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 *
 * @size: size of the array
 *
 * @action: pointer to the function we need to use
 *
 * @array: array to pass
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
