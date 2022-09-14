#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an int
 * @i: integer to pass through
 *
 * Return: 0
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
