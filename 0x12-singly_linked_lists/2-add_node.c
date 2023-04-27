#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * name - add_node.
 * @head: Pointer to a pointer to head.
 * @str: string ti be stored in the new node.
 * Return: the address of the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return(NULL);
	new_node -> str = strdup(str);

	if (new_node -> str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node -> len = strlen(str);
	new_node -> next = *head;
	*head = new_node;
	return (*head);
}
