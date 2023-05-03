#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to head of listint_t list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	/*declaration and initialization of variables*/
	listint_t *prev = NULL;
	listint_t *next = NULL;

	/*using while loop, loop to the end of the list*/
	while (*head != NULL)
	{
		/*update the list, storing next node*/
		next = (*head)->next;
		/*reverse the current node*/
		(*head)->next = prev;
		/*set the prevnode pointer to current node*/
		prev = *head;
		/*set the head pointer to nextnode*/
		*head = next;
	}
	/*Return pointer to the first node of the reversed list*/
return (prev);
}
