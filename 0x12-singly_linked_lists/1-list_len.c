#include "lists.h"

/*
 * File: 1-list_len.c.
 * Author: Basma Shaban Ali
 * email: shaabanbasma@gmail.com
 */

/**
 * list_len - prints all the elements
 *              of a "list_t" list.
 * @h: pointer to the start of the list.
 * Return: number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;
	tmp = h;

	for (i = 0; tmp; i++)
	tmp = tmp->next;
	return (i);
}
