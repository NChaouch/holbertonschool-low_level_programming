#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints
 * all the elements of a list_t.
 * @h: the first pointer of the head list_t (const type).
 * Return: number of nodes in the list_t.
 */
size_t print_list(const list_t *h)
{
	size_t ct = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			ct++;
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			ct++;
		}
	}
	return (ct);
}
