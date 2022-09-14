#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *_ islower - checks to see if a character is lowercase
 *@c: character passed through to be printed
 *
 * Return: 1(true)/0(false)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
