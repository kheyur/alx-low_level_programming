#include "main.h"
/**
 * *_strcat - concatenate two strings
 * @dest: string to be added on to
 * @src: string to be added to dest
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	char str[100];

	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		str[j] = dest[i];
		i++;
		j++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		str[j] = src[i];
		i++;
		j++;
	}
	str[j] = '\0';

	return (*str);
}
