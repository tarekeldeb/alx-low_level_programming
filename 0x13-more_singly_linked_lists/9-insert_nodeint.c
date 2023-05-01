#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if(*head == NULL && idx = 0 )
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else if (*head == NULL)
	{
		return (NULL);
	}


	idx--;
	while (*head != NULL)
	{
		*head = (*head)->next;
		idx--;
	}
	*head->next = new;
	return (*new);
}
