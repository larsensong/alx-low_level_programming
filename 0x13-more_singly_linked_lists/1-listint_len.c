#include "lists.h"
#include <stdio.h>
/**
 * listint_len -return no of element ina list
 * @h: pointer to head of a list
 * Return: no of elemnts in a list
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
