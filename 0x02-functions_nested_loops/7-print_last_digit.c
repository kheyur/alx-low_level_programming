#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @i: pass through integer
 *
 * Return: last digit
 */
int print_last_digit(int i)
{
	int c;

	c = i % 10;
	if (c < 0)
	{
		c = -1 * c;
	}
	_putchar('0' + c);
	return (c);
}
