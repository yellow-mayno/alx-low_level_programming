#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
* add_node - add a node xD
* @head: the head to be cut (a pointer)
* @str: str to put inside
* Return: a pointer of new element
*/
list_t *add_node(const list_t *head, char *str)
{
	list_t new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = str;
	if (str != NULL)
	{
			while (str[i] != '\0')
				i++;
	}
	new->len = i;
	new->next = (list *)h;
	return (new);
}
