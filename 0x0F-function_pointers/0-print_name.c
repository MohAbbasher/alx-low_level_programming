/**
 * print_name- functiont tp print name
 *
 * @name: name to be printed
 * @f: functio used in printing
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
