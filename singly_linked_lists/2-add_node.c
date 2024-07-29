#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head: the pointer to a pointer of the head list_t.
 * @str: pointer to the const char.
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int ct;

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

	for (ct = 0; str[ct] != '\0'; ct++)
		;

	new_node->len = ct;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
