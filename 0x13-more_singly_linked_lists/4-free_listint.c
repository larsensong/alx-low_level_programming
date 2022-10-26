#include "lists.h"
/**
 * free_listint - free a list
 * @head: pointer to the head
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
	tmp = head->next;
	free(head);
	head = tmp;
}
}
