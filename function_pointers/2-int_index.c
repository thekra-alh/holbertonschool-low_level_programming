#include "function_pointers.h"
#include <stddef.h> /* for NULL */

/**
* int_index - Searches for an integer using a comparison function.
* @array: The array of integers.
* @size: The number of elements in the array.
* @cmp: A pointer to the function to compare values.
*
* Return: The index of the first match, or -1 if none is found or on error.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
