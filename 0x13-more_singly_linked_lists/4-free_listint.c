#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of listint list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	/*traversal of the listint_t list*/
	while (head != NULL)
	{
		/*set temporary pointer to head*/
		temp = head;

		head = head->next;
		/*free nodes using free function*/
		free(temp);
	}
}


