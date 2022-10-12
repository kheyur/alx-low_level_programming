#include "main.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		if (f != NULL)
			f(name)l
	}
}
