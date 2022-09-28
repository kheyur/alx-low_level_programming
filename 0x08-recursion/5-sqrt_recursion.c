#include "main.h"
/**
 * _sqrt_recursion - uses _sqrt and recursion to find natural square root
 * @n: number to be square rooted
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, 2));	
}
/**
 * _sqrt - return the natural square root of a number
 * @i: number to square
 * @j: iterator
 * Return: square root or -1
 */
int _sqrt(int i, int j)
{
	if (j % (i / j) == 0)
	{
		if (j * (i / j) == i)
		{
			return (j);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + _sqrt(i, j + 1));
}
