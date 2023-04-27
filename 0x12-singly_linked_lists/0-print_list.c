#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints all elements in the list
 *
 * @h: The pointer to the list_t to be printed
 *
 * Return: The number of elements in the node
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
