#include <stdio.h>
#include "lists.h"
/**
 * list_len - the number of elements in a linked list
 * @h: poitner to the head
 * Return: Number of elements of the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
