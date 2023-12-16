#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to add to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set data for new node */
	new_node->n = n;
	new_node->prev = NULL;

	/* Link the new node to the head, if head exists */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update head to point to the new node */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
