#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * name - print_list
 * @h: Poitner to a struct list_t
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if ((h -> str) == NULL)
			printf("[0] (nil)\n");
		else 
			printf("[%d] %s\n",h -> len, h -> str);
		h = h -> next;
		count++;
	}
	return (count);
}
