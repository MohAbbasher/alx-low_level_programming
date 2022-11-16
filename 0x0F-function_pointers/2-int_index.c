#include <stddef.h>
/**
 * int_index - return first accurance of element
 *
 * @array: array input
 * @size: array size
 * @cmp: comarison function
 *
 * Return: index of element or -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);

		}

	}

	return (-1);
}
