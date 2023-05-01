#include "lists.h"
/**
 * listint_t *add_nodeint - adds a node at the start of listint_t
 * @head: pointer to pointer to head node
 * @n: value stored in newnode
 *
 * Return: address of new element or NULL on fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;
	/*new node memory allocation*/
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);/*when memory allocation fails*/
	/*newnode is set to n on success*/
	newnode->n = n;
	/*next pointer of newnode set to current head*/
	newnode->next = *head;
	/*head is set to point to the newnode*/
	*head = newnode;
	/*Return the adress of the newnode*/
	return (newnode);
}
