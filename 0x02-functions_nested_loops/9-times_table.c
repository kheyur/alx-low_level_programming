#include "main.h"
/**
 *times-table - print out 9 times table
 */
void times_table(void)
{
	int i, j, sum;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			sum = i * j;
			_putchar(44);
			_putchar(32);
			if (sum <= 9)
			{
				_putchar(32);
				_putchar(sum + 48);
			}
			else
			{
				_putchar((sum / 10) + 48);
				_putchar((sum % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
