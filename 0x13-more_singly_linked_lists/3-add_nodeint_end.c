#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @n: The integer for the new node to contain
 * Return: if the function fail NULL  adress new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;
new = malloc(sizeof(listint));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;

if (*head == NULL)
	*head = new;
else
{
last = *head;
while (last->next != NULL)
	last = last->next;
last->next = new;
}
return (*head);
}
