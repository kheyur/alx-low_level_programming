#include <stdlib.h>
#include <stdio.h>
/**
 * main - print base 10 digits from 0 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i%10 + '0');
	}
	putchar('\n');
	return (0);
}
