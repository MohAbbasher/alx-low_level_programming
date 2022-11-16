/**
 * print_name- functiont to print name
 *
 * @name: name to be printed
 * @f: function used in printing
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
