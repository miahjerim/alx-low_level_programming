
#include "lists.h"
/**
 *listint_len - prints number of elements in listint_t list
 *@h: pointer to first node of listint_t
 *
 *Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	/*initialization of count variable*/
	size_t count = 0;/*keeps track of number of elements*/

	/*while loop iteration*/
	while (h != NULL)
	{
		/*head pointer pointed to next*/
		h = h->next;
		/*count variable is incremented*/
		count++;
	}
	/*returns number of elements*/
	return (count);
}
