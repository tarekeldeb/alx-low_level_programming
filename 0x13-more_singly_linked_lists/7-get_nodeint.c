#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to the first node.
 * @index: the index of the node.
 * Return: pointer to the node we're looking for, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
