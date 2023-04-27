#include <string.h>
#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a linked list
 *
 * @head: Pointer to the node
 *
 * @str: String to be added to the node
 *
 * Return: Address to new node or NULL at failure
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup0;
	int len;
	list_t *newnode;

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
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
