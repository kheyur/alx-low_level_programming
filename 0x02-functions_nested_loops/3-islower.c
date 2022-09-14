#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * islower - checks to see if a character is lowercase
 *
 * Return: 1(true)/0(false)
 */
int islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
