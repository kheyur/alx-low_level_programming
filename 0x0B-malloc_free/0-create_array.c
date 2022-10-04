#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array of chars and initialize it with a specific char
 * @size: size of the array
 * @c: char to initialize array
 * Return: null if fail or size = 0; pointer to array if successful
 */
char *create_array(unsigned int size, char c)
{
	char *pt = &c;
	int i = (sizeof(unsigned int) * size);

	pt = malloc(i);
	if (pt == NULL)
	{
		return (NULL);
	}
	else
	{
		return (pt);
	}
}
