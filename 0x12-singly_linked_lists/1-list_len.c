#include <stdio.h>
#include "lists.h"
/**
* list_len - prints a list
* @h: a list_t
* Return: number of printed chars
*/
size_t list_len(const list_t *h)
{
	unsigned int cnt = 0;
	list_t *ptr = (list_t *)h;

	while (ptr != NULL)
	{
		cnt++;
		ptr = ptr->next;
	}
	return (cnt);
}
