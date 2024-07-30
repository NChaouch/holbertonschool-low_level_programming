#include "lists.h"
/**
 * print_dlistint - function that prints all
 * the elements of a dlistint_t list.
 * @h: the first pointer to the head of dlistint_t.
 * Return: the result of ct (n).
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ct = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		ct++;
	}
	return (ct);
}
