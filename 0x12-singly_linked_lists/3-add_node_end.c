#include "lists.h"
#include <string.h>
/**
 * add_node_end - add new node at end of the list
 * @head: pointer to head of the list
 * @str: string to be added to
 * Return: Null or address of element
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new, *last;

new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);
dup = strdup(str);
if (str == NULL)
{
free(new);
return (NULL);
}
for (len = 0; str[len];)
len++;
new->str = dup;
new->len = len;
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
