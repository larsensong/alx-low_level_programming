#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements in alist
 * @h: pointer to header in alist
 * Return: no of node in a lsit
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
