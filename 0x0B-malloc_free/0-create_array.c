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

	pt = malloc(sizeof(unsigned int) * size);
	if (pt == NULL)
	{
		printf("Failed to allocate $d bytes\n", (sizeof(unsigned int) * size));
		return (NULL);
	}
	else
	{
		return (pt);
	}
}
