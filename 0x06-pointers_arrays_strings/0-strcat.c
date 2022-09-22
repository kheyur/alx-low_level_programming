#include "main.h"
/**
 * *_strcat - concatenate two strings
 * @dest: string to be added on to
 * @src: string to be added to dest
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
		{
			break;
		}
		count++;
		count2++;
	}
	return (dest);
}
