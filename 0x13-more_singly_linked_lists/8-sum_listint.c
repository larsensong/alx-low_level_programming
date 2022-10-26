#include "lists.h"
/**
 * sum_listint - calaculates sum of data in a list
 * @head: pointer  to head of the list
 * Return: list empty is 0 or return sum
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
