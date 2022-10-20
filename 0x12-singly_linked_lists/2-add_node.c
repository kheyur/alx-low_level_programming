#include "lists.h"
/**
 * add_node - add new node to beginning of list
 * @head: first element in list
 * @str: string to duplicate
 * Return: address of new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t newLen;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (newLen = 0; str[newLen]; newLen++)
		;

	new->len = newLen;
	new->next = *head;
	*head = new;
	return (*head);
}	
