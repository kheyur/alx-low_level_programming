#include "main.h"
/**
 * rev_string - reverses a string
 * @s - string to pass
 */
void rev_string(char *s)
{
	int count, i, j;
	char *tempStr1, tempStr2;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	tempStr1 = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tempStr2 = *(tempStr1 + j);
			*(tempStr1 + j) = *(tempStr1 + (j - 1));
			*(tempStr1 + (j - 1)) = tempStr2;
		}
	}
}
