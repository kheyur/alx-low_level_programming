#include <stdlib.h>
#include <stdio.h>
#include <main.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: (0)
 */
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
