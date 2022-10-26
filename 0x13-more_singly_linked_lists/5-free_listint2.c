#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: pointer to adress of the head
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head == NULL)
	return;
while (*head)
{
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
}
head = NULL;
}
