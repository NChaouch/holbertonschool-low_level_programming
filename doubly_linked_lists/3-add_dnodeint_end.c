#include "lists.h"
/**
 * dlistint_t *add_dnodeint_end - function that adds
 * a new node at the end of a dlistint_t list.
 * @head: the pointer to a pointer of the head dlistint_t.
 * @n: the pointer to the const int.
 * Return: the new_node (the address of the new element).
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *currt_node, *new_node, *end_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	currt_node = *head;
	while (currt_node != NULL)
	{
		if (currt_node->n == n)
		{
			free(new_node);
			return (NULL);
		}
		currt_node = currt_node->next;
	}

	end_node = *head;
	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	end_node->next = new_node;
	new_node->prev = end_node;
	return (new_node);
}
