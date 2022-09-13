#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - runs print_alphabet() function 
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: (0)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= z; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
