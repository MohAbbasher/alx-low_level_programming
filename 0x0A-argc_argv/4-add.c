#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum- check for number inputs
 *
 * @num: string to check
 * Return: 0 for success , 1 for failure
 */
int isNum(char num[])
{
int i, l = strlen(num);

for (i = 0; i < l; i++)
{
	if (!isdigit(num[i]))
	return (1);
}

return (0);
}

/**
 * main- add positive numbers
 *
 * @argc: args count
 * @argv: args array
 *
 * Return: sum, 0,or Error
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i, n;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
	if (isNum(argv[i]) == 0)
	{
		n = atoi(argv[i]);
		 sum += n;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

printf("%d\n", sum);

return (0);
}

