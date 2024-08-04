#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: the pointer to a pointer of the head dlistint_t.
 * @index: unsigned int (position of the node).
 * Return: 1 if success -1 if fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currt_node = *head;
	unsigned int t;

	if (!head || !*head)
	{
		return (-1);
	}

	for (t = 0; currt_node && t < index; t++)
	{
		currt_node = currt_node->next;
	}

	if (!currt_node)
	{
		return (-1);
	}

	if (currt_node->prev)
	{
		currt_node->prev->next = currt_node->next;
	}

	else
	{
		*head = currt_node->next;
	}

	if (currt_node->next)
	{
		currt_node->next->prev = currt_node->prev;
	}

	free(currt_node);
	return (1);
}
