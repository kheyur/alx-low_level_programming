#include "list.h"
/**
 * list_len returns number of elements in a linked list_t list
 * @h: singly linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n;
	int i;

	n = 0;
	while (h != null)
	{
		h = h.next;
		n++;
	}
	return (n);
}
