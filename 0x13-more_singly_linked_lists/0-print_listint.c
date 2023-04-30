#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *print_listint - prints all elements
 *@h: pointer to first node
 *
 *Return: number of nodes
 */

/*function prototype*/
size_t print_listint(const listint_t *h)
{
	/*count variable initialization*/
	size_t n = 0;

	/*function loop to iterate through the list*/
	while (h)
	{
	/*print value of current node*/
	printf("%d\n", h->n);
	/*moves to next node*/
	h = h->next;
	/*count variable incremented by 1*/
	n++;
	}
	/*returns count.. number of nodes in the list*/
	return n;
}
