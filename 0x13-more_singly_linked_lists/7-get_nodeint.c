#include "lists.h"
/**
 * get_nodeint_at_index - returns node at nth position in list
 * @head: beginning of linked list
 * @index: index of node
 * Return: nth node, null if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
