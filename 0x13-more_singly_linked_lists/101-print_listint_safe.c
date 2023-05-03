#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	/*declaration and initialization of variables*/
	const listint_t *current;
	size_t count = 0;

	/*loop through the list*/
	while (head != NULL)
	{
		/*print the address and value of the current node*/
		printf("[%p] %d\n", (void *)head, head->n);
		/*increment count*/
		count++;

		/*set head to next node*/
		current = head;
		head = head->next;
		/*break loop if current node is printed*/
		if (current <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	/*Return number of nodes in the list*/
	return (count);

}
