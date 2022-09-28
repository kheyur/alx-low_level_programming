#include "main.h"
/**
 * _puts_recursion - prints a string followed by '\n'
 * @s: string to print
 * Return: none
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	while (*(s + 1) != '\0')
	{
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
