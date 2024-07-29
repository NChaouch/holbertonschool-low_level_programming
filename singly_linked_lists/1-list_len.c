#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that returns the number
 * of elements in a linked list_t list.
 * @h: the first pointer of the head list_t (const type).
 * Return: number of nodes in the list_t.
 */
size_t list_len(const list_t *h)
{
	size_t ct = 0;

	for (; h != NULL; h = h->next)
	{
		ct++;
	}

	return (ct);
}
