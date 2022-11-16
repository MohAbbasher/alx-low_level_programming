#include <stddef.h>
/**
 * array_iterator - perform action on all array elements
 *
 * @array: input array
 * @size: array size
 * @action: action to be performed
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
