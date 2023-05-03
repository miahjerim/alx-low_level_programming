#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to head of the linked list
 * @index: index of node to be deleted
 *
 * Return: 1 on success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*declaration of variables*/
	listint_t *currentnode;
	listint_t *prevnode;
	unsigned int n;

	/*if function to check if the list is empty*/
	if (*head == NULL)
		/*return -1 if failed*/
		return (-1);
	/*initialize decleared pointers */
	currentnode = *head;
	prevnode = NULL;
	/*linked list travrsed to the specific index*/
	for (n = 0; n < index; n++)
	{
		/*if function checking for end of list before the specific index*/
		if (currentnode == NULL)
			return (-1);
		/*set prevnode to currentnode*/
		prevnode = currentnode;
		/*set currentnode to next*/
		currentnode = currentnode->next;
	}
	/*first node do be deleted*/
	if (prevnode == NULL)
		*head = currentnode->next;
	else
		prevnode->next = currentnode->next;
	/*free memory of current node set for deletion*/
	free(currentnode);
	/*return 1 for success*/
	return (1);
}
