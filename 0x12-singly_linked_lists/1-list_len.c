#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 *
 * @h: A pointer to the first node list_t
 *
 * Return: Returns The number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			return (0);
		}
		else
		{
			count++;
			h = h->next;
		}
	}

	return (count);
}
