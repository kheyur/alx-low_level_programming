#include "main.h"
/**
 * reverse_array - revere the elements in an array
 * @a: array
 * @n: number of elements in a
 */
void reverse_array(int *a, int n)
{
	int i, j, tempArr;

	for (i = 0; i < n-1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tempArr = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
