#include "lists.h"

/**
 * list_len - linght of linked list
 * @h: the pointer
 * Return: the size
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
