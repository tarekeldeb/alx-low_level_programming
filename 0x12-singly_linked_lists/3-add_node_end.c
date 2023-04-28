#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * name - add_node_end.
 * @head: Pointer to a pointer.
 * @str: String to be in the new node.
 * Return: The address of the element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
