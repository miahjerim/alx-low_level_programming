#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a linked list
 *
 * @head: A pointer to the list
 *
 * @str: The string to add
 *
 * Return: Pointer to new list or NULL at failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup0;
	int len;
	list_t *newnode, *last_node;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	dup0 = strdup(str);
	if (dup0 == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (len = 0; str[len];)
	{
		len++;
	}
	newnode->str = dup0;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = newnode;
	}

	return (*head);
}
