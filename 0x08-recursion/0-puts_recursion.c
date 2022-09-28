#include "main.h"
/**
 * _puts_recursion - prints a string followed by '\n'
 * @s: string to print
 * Return: none
 */
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s + i);
	i++;
	while (*(s + i) != '\0')
	{
		_puts_recursion(s + i);
	}
	_putchar('\0');
}
