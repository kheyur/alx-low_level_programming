#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: integer 1 to swap
 * @b: integer 2 to swap
 */
void swap_int(int *a, int *b)
{
	int tempA;

	tempA = *b;
	*b = *a;
	*a = tempA;
}
