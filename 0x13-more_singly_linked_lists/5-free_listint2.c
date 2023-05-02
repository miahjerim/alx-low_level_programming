#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and set head to NULL
 *
 * @head: pointer to head of listint list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	/*if function to check if head is NULL*/
	if (head == NULL)
		return;

	/*traversal of the listint_t list*/
	while (*head != NULL)
	{
		/*set curren node to temporary*/
		temp = *head;
		/*set head to next node*/
		*head = (*head)->next;
		/*free nodes using free function*/
		free(temp);
	}
	/*set head to NULL*/
	*head = NULL;
}
