#include "lists.h"
/**
 * add_nodeint - adds new node to beginning of a listint_t list
 * @head: beginning of list
 * @n: value of new node
 * Return: address of new element, NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
