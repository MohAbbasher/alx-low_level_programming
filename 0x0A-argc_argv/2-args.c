#include <stdio.h>

/**
 * main- print all args passed
 *
 * @argc: number of arguments
 * @argv: args array of pointer
 *
 * Return: success 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
