#include "lists.h"
/**
 * add_nodeint_end - add new node to end of a listint_t list
 * @head: beginning of a list
 * @n: value of new node
 * Return: address of new element, NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new, *h;
	size_t n;
	int i = 0;

	new malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	h = *head;
	if (h == NULL)
	{
		*head = new;
	}
	else
	{
		while (i == 0)
		{
			if (h->next == NULL)
			{
				h->next = new;
				new->nex = NULL;
				i = 1;
			}
			h = h->next;
		}
	}
	return (new);
}
