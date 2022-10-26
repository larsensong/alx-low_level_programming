#include "lists.h"
/**
 * add_nodeint - add a new node at begin of a list
 * @head: a pointer adress to haed of list
 * @n: the integer for the new node
 * Return: if fail null or new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
