#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: pointer to first node
 * Return: the size
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	if (h == NULL)
		printf("list is empty\n");
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
