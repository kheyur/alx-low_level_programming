#include "lists.h"
/**
 * free_listint - freees a listint_t list
 * @head: beginning of list
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->n);
		free(temp);
	}
}
