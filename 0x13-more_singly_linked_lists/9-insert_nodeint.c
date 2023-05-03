#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: index where the new node is added
 * @head: pointer to head
 * @n: value to be stored in the new node
 *
 * Return: address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newnode;
	unsigned int m;

	/*if function checks if head is NULL*/
	if (head == NULL)
		return (NULL);

	/*memory allocation for new node*/
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	/*value of the new node is set*/
	newnode->n = n;
	/*if index(idx) is 0*/
	if (idx == 0)
	{
	/*insert a new node at the beginning of listint_t*/
	newnode->next = *head;
	*head = newnode;
	return (newnode);
	}
	/*traversal of the listint_t list to locate specified index*/
	temp = *head;
	for (m = 0; m < idx - 1 && temp != NULL; m++)
		temp = temp->next;
	/*check if temp node is 0*/
	if (temp == NULL)
	{
		/*free the memory allocated to the new node*/
		free(newnode);
		return (NULL);
	}
	/*set the new node at the specific index*/
	newnode->next = temp->next;
	temp->next = newnode;
	/*Return the address of the new node*/
	return (newnode);
}

