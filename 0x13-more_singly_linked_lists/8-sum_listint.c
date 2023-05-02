#include "lists.h"
/**
 * sum_listint - returns the sum of all the data(n) of a linked list
 * @head: pointer to the head node of listint_t
 *
 * Return: sum of data in linked list or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	/*initialization of variables*/
	int sum = 0;
	listint_t *currentnode = head;

	/*traversal of listint_t */
	while (currentnode != NULL)
	{
		/*while currentnode is not null add the integers*/
		sum += currentnode->n;
		/*set currentnode to next*/
		currentnode = currentnode->next;
	}
	/*return sum of data in the list*/
	return (sum);
}
