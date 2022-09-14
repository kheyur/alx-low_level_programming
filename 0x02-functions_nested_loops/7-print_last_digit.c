#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @i: pass through integer
 *
 * Return: last digit
 */
int print_last_digit(int i)
{
	int b,c;

	c = i % 10;
	while (c >= 10)
	{
		c = c/10;
	}
	for( b = 0; b < 2; b++)
	{
		_putchar(c);
	}
	return (c);
}
