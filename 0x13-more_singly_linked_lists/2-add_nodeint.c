#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - add at the beginning a node
* @head: the pointer to the pointer. why ? IDK
* @n: the int of the node
* Return: I think it will be *head xD turns out I was wrong
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
	{
		free(newhead);
		return (NULL);
	}
	newhead->n = n;
	newhead->next = *head;
	return (newhead);
}