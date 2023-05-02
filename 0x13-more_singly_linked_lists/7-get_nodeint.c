#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t
 *@index: is the index of the node, starting at 0
 *@head: pointer to head of listint_t list
 *
 *Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentnode = head;

	unsigned int count = 0;/*index of the current node*/

	/*Traversal of listint_t list untill index is reached*/
	while (currentnode != NULL)
	{
		/*checks is the index is reached*/
		if (count == index)
		{
			/*if the index is reached return currentnode*/
			return (currentnode);
		}
		/*increament count*/
		count++;
		/*set currentnode to next node*/
		currentnode = currentnode->next;
	}
/*return null if the node does not exist*/
return (NULL);
}
