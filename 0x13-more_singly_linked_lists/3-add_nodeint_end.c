#include "lists.h"
/**
 * listint_t *add_nodeint_end - adds a new node at the end of listint_t
 * @head: pointer to pointer to the first node of listint
 * @n: value to stored in the new node
 *
 * Return: Adress of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*variable initialization*/
	listint_t *newnode;

	listint_t *temp;

	/*memory alocation to the new node*/
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	/*updating newnode value to n*/
	newnode->n = n;
	/*updating the next pointer to NULL*/
	newnode->next = NULL;
	/*if empty list, set newnode as head*/
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	/*while loop to traverse the linked list */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/*set newnode as last node*/
	temp->next = newnode;
	return (newnode);
}
