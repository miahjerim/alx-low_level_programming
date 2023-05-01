#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
int sum_listint(listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);
size_t listint_len(const listint_t *h);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
void free_listint2(listint_t **head);
void free_listint(listint_t *head);
int pop_listint(listint_t **head);

#endif
