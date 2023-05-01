#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: pointer to the first node.
 * Return: resulting sum, 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
