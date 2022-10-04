#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array of chars and initialize it with a char
 * @size: size of the array
 * @c: char to initialize array
 * Return: null if fail or size = 0; pointer to array if successful
 */
char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int i = (sizeof(c) * size);
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
	pt = malloc(i);
	if (pt == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		pt[j] = c;
	}
	return (pt);
}
