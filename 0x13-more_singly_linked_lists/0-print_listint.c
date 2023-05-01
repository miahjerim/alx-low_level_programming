#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to the first node of listint_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	/*initialize count variable to 0*/
	size_t count = 0;/*keeps track of elements of listint_t*/

	/*while loop itteration*/
	while (h != NULL)
	{
		/*prints value of current node*/
		printf("%d\n", h->n);

		/*updates h to point to next node*/
		h = h->next;
		/*increament count variable*/
		count++;
	}
	/*return count the elements of listint_t*/
	return (count);
}


