#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print every element of an array
 * @array: Array
 * @size: How many element to print
 * @action: pointer to print in regular or hex
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
