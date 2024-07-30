#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: Pointer of head dlistint_t.
 * Return: void function.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currt_node;

	while (head != NULL)

	{
		currt_node = head;
		head = head->next;
		free(currt_node);
	}
}
