#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to pointer to head listint_t list
 *
 *
 * Return: 0 on an empty list
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;
	/*check the list, if empty return 0*/
	if (*head == NULL)
		return (0);

	/*set temp node to point to head node*/
	temp = *head;

	if (*head != NULL)
	{
	/*find data of the head node*/
	data = temp->n;
	/*update head pointer to next node*/
	*head = (temp)->next;
	/*use free function to free the prev head node*/
	free(temp);
	}
	else
	{
		data = 0;
	}
	/*return data of deleted node*/
return (data);
	}
