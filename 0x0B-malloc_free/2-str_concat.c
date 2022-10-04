#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: poinrter to newly allocated space, NULL if empty or failed
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int size, i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}

	for (int j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	ptr = mallow(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}

	size = j;

	for (j = 0; j <= size; k++, j++)
	{
		ptr[k] = s2[j];
	}
	return (ptr);
}
