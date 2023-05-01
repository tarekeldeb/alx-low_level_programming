#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list.
 * @head: pointer to a pointer which points to the first node.
 * Return: 0 if the linked list is empty, data of head's node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;

	return (data);

}

