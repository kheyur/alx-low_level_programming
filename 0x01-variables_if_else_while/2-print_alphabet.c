#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print out alphabet in lowercase, followed by new line
 *
 * Return: (0)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
