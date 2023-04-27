#include <stdio.h>
#include "lists.h"
/**
 * name - list_len
 * @h: poitner to the head
 * Return: Number of elements of the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h -> next;
	}
	return (count);
}
