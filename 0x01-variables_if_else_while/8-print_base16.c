#include <stdlib.h>
#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 0x0; a <= 9; a++)
	{
		putchar(a % x + '0');
	}
	for (a = 0x64; a <= 'f'; a++)
	{
		putchar(a % x + '0');
	}
	putchar('\n');
	return (0);
}	
