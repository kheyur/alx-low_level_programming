#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to new allocated space in memory of a copy of str
 *@str: string to be copied
 * Return: pointer to str and NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int size, i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
		size++;
	}
	cpy = malloc(sizeof(char) * (size + 1));
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
}
