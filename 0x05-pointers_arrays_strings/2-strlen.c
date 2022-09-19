#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string passed to method
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
