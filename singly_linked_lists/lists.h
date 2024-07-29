#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stddef.h>
/**
 * struct list_st - the singly list.
 * @str: the pointer to the character (string).
 * @len: the length of the str.
 * @next: the pointer to the next node
 * in list_h.
 */
typedef struct list_st
{
	char *str;
	unsigned int len;
	struct list_st *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
