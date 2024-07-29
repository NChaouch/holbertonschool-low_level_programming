#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *add_node_end - function that adds a
 * new node at the end of a list_t list.
 * @head: the pointer to a pointer of the head list_t.
 * @str: pointer to the const char.
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr;
	int ct = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[ct] != '\0')
	{
		ct++;
	}
	new_node->len = ct;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new_node;
	return (new_node);
}
