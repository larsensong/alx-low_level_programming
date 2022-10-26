#include "lists.h"
/**
 * pop_listint - delete the node in a list
 * @head: pointer to adress of the head
 * Return: if list is empty 0
 */
int pop_listint(listint_t **head)
{
lisint_t *tmp;
int ret;
if (*head == NULL)
	return (0);
tmp = *head;
ret = (*head)->n;
*head = (*head)->next;
free(tmp);
return (ret);
}
