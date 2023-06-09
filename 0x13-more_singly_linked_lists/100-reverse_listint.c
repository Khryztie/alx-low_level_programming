#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to the first node of
 *        the head of the linked list.
 *
 * Return: A pointer to the first node of the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
