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
	int bool = false;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new-> = strdup(str);
	for (n = 0; str[n]; n++)
		;

	h = *head;
	while (bool)
	{
		if (h->next == NULL)
		{
			h->next = new;
			new->next = NULL;
			return (new);
		}
		h = h->next;
	}
	return (new);
}

