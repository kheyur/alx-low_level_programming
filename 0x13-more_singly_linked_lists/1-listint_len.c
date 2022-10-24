#include <lists.h>
/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: singly linked list
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	site_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
