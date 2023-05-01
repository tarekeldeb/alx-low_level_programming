#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - delets a list
 * @head: a pointer to the first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
