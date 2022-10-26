#include "lists.h"
/**
 * get_nodeint_at_index - locate a node ina list
 * @head: pointer to head in a list
 * @index: index of node to locate
 * Return: node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;
for (node = 0; node < index; node++)
{
if (head == NULL)
	return (NULL);
head = head->next;
}
return (head);
}
