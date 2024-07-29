#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * free_list - function that frees a list_t list.
 * @head: the pointer of the head to the list_t.
 */
void free_list(list_t *head)
{
	list_t *currt_node;

	for (; head != NULL; head = head->next)
	{
		currt_node = head;
		free(currt_node->str);
		free(currt_node);
	}
}
