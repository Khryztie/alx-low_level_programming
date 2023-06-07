#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *               data (n) in a linked list.
 * @head: A pointer to the first node in the linked list.
 *
 * Return: empty list - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
