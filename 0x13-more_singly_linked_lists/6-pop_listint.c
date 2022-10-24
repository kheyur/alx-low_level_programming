#include "lists.h"
/**
 * pop_listint - deletes head node of a linked list
 * @head: beginning of linked list
 * Return: head nodes data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int headn;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	headn = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (headn);
}
