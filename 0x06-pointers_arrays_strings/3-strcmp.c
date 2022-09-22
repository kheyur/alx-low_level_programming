#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: numerical/ascii differenece strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, dif = 0;

	while (dif == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		dif = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (dif);
}		
