#include "main.h"
/**
 * puts_half - prints half a string followed by new line
 * @str: string to pass to method
 */
void puts_half(char *str)
{
	int count;

	count = 0;
	while (count >= o)
	{
		if (str[cout] == '\0')
		{
			break;
		}
		count++;
	}
	if (count % 2 == 1)
	{
		i = count / 2;
	}
	else 
	{
		i = (count - 1) / 2;
	}
	for (i++; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
