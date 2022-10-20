#include "lists.h"
/**
 * add_node_end - adds a new node to the end of a list_t list
 * @head: first node in list
 * @str: data value for new node
 * Return: address of new element, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *h;
	size_t n;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (n = 0; str[n]; n++)
		;

	new->len = n;
	h = *head;
	if (h == NULL)
	{
		*head = new;
	}
	else
	{
		if (h->next == NULL)
		while (i == 0)
		{
			h->next = new;
			new->next = NULL;
			i = 1;
			if (h->next == NULL)
			{
				h->next = new;
				new->next = NULL;
				i = 1;
			}
			h = h->next;
		}

	}

	return (new);
}
