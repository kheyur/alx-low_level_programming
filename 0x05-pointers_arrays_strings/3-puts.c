#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _puts - prints string followed by a new line
 * @str: string passed to method
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(str[count]);
		count++;
	}
}
