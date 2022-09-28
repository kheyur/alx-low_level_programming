#include "main.h"
/**
 * is_prime_number - uses is_prim_num and recursion to check if prime
 * @n: number to check
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (is_prime_num(n, 2);
}
/**
 * is_prime_num - checks to see if a number is a prime number
 * @i: number to check
 * @j: iterator
 * Return: 1 if prime, 0 if not
 */
int is_prime_num(int i, int j)
{
	if (i % j == 0)
	{
		if (i == j)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime_num(i, j + 1));
}
