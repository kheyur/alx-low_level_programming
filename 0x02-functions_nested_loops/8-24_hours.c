#include "main.h"
/**
 * jack_bauer - print time for a 24 hour cycle
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j <53 ; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
