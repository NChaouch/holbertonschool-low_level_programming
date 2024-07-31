#include "lists.h"
/**
 * dlistint_t *insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: Pointer to a pointer to the head of the dlistint_t list.
 * @idx: The index of the new node should be added (unsigned int).
 * @n: The value of new node.
 * Return: The new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *currt_node = *h;
	unsigned int t;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
			*h = new_node;
			return (new_node);
		}
	for (t = 0; currt_node && t < idx; t++)
	{
		currt_node = currt_node->next;
	}
	if (!currt_node && t == idx)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	else if (!currt_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = currt_node;
	new_node->prev = currt_node->prev;
	if (currt_node->prev)
		currt_node->prev->next = new_node;
	currt_node->prev = new_node;
	return (new_node);
}
