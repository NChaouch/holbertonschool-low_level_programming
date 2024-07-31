#include "lists.h"
/**
 * dlistint_t *get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list.
 * @head: Pointer of head dlistint_t.
 * @index: unsigned int.
 * Return: the currt_node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ct = 0;
	dlistint_t *currt_node = head;

	while (currt_node != NULL && ct < index)
	{
		currt_node = currt_node->next;
		ct++;
	}
	return (currt_node);
}
