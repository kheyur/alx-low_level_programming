#include "main.h"
/**
 * char *_memset - fill first n btes of memory at *s with b
 * @s:pointer to memory area
 * @b: char to fill memory
 * @n: number of bytes to fill
 * Return: pointer to s
 */
char *_memset(char *s. char b, unsigned int n)
{
	unsigned char* p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}

	return s;
}
