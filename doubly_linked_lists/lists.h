#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dlistint_st - The doubly linked list.
 * @n: integer.
 * @prev: The pointer to the previous node in dlistint_t.
 * @next: The pointer to the next node in dlistint_t.
 */
typedef struct dlistint_st
{
	int n;
	struct dlistint_st *prev;
	struct dlistint_st *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
