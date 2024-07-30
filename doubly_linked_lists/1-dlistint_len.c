#include "lists.h"
/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: the first pointer to the head of dlistint_t.
 * Return: the result of ct (n).
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ct = 0;

	while (h != NULL)
	{
		h = h->next;
		ct++;
	}

	return (ct);
}
