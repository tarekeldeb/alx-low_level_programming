#include <stdio.h> 
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - calculate the number of elements in a list
 * @h: poitner to the first element of the list
 * Return: the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t count =0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

