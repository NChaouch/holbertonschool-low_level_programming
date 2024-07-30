#include "lists.h"
/**
 * dlistint_t *add_dnodeint - function that adds
 * a new node at the beginning of a dlistint_t list.
 * @head: the pointer to a pointer of the head dlistint_t.
 * @n: the pointer to the const int.
 * Return: the new_node (the address of the new element).
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *currt_node;

	currt_node = *head;

	while (currt_node != NULL)
	{
		if (currt_node->n == n)
		{
			return (NULL);
		}

		currt_node = currt_node->next;
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}

	else
	{
		new_node->next = NULL;
	}

	*head = new_node;

	return (new_node);
}
