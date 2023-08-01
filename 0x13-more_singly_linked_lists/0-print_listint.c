#include "lists.h"
#include <stdio.h>
/**
* print_listint - print ints of a sing linked list
* @h: the pointer to first element
* Return: the number of ints
*/
size_t print_listint(const listint_t *h)
{
	int cnt = 0;
	listint_t *ptr;

	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		cnt++;
		ptr = ptr->next;
	}
	return (cnt);
}
