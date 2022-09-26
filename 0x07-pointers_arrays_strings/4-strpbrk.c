#include "main.h"
/**
 * _strpbrk - search string for any of a set of bytes
 * @s: string
 * @accept: set of characters
 * Return: pointer to s that matches accept or null if none
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
