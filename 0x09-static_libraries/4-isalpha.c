#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks to see if character
 * is alphabetic
 * @c: character passed in to check
 *
 * Return: 1 if letter, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
