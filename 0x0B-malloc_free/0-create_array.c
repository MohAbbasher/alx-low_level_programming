#include <stdlib.h>

/**
* create_array - creates array of chars and initilize it with
*                char
*
* @size: array size
* @c: char
* *
* Return: array @a
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
