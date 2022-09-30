#include "main.h"
/**
 *_strncat - concatenate 2 strings with n bytes and no null value
 * @dest: string to be added to
 * @src: string to add to dest
 * @n: number of bytes to use from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
