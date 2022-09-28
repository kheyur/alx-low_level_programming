#include "main.h"
/**
 * _strlen_recursion - returns lenght of a string
 * @s: string
 * Return: length of string as an int
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*(s + count) != '\0')
	{
		count++;
		_strlen_recursion(s + 1);
	}
	return (count);
}
