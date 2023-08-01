#include "lists.h"
#include <stdio.h>
/**
* listint_len - number of ints of a sing linked list
* @h: the pointer to first element
* Return: the number of ints
*/
size_t listint_len(const listint_t *h)
{
	int cnt = 0;
	listint_t *ptr;

	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		cnt++;
		ptr = ptr->next;
	}
	return (cnt);
}
