#include <stdio.h>
#include "lists.h"
/**
* print_list - prints a list
* @h: a list_t
* Return: number of printed chars
*/
size_t print_list(const list_t *h)
{
	unsigned int cnt = 0;
	list_t *ptr = (list_t *)h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			puts("[0] (nill)");
		else
			printf("[%u] %s\n", (*ptr).len, ptr->str);
		cnt++;
		ptr = ptr->next;
	}
	return (cnt);
}
