#include "lists.h"
/**
 * sum_dlistint - function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head: Pointer of head dlistint_t.
 * Return: Sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *currt_node = head;

	while (currt_node != NULL)
	{
		sum += currt_node->n;
		currt_node = currt_node->next;
	}
	return (sum);
}
