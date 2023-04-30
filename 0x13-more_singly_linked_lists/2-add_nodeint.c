#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a node at begining
 * @head: pointer to a pointer that points to the first node
 * @n: data of the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
