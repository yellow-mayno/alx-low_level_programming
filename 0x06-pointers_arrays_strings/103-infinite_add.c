#include <stdio.h>
/*
* infinite_add - sdfsdf
* @n1: sdfsd
* @n2: sdfsd
* @r: qsdqsdqsd
* size_r: sdfsdf
* Return: rdsfsdfsdf
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0, l2 = 0, i, sum = 0, cumul = 0, decal;
	char *ptr;

	while (n1[l1] != '\0')
		l1++;
	while (n2[l2] != '\0')
		l2++;
	if (l2 > l1)
	{
		ptr = n1;
		n1 = n2;
		n2 = ptr;
		decal = l1;
		l1 = l2;
		l2 = decal;
	}
	for (i = 0; i < l2; i++)
	{
		sum = n1[l1 - 1 - i] + n2[l2 - 1 - i] - 96 + cumul;
		if (i == size_r)
			return (0);
		r[size_r - 1 - i] = sum % 10 + 48;
		cumul = sum / 10;
	}
	/*puts("jalon1");*/ /* inversed n1 and n2 but not l1 and l2 */
	if (l1 == l2)
	{
		/* printf("%d cumul %d i %d size_r", cumul, i, size_r);*/
		if (i == size_r)
			return (0);
		else if (cumul != 0)
		{
			r[size_r - 1 - i] = cumul + 48;
			/* printf("%c cumul%d\n", r[size_r - 1 - i], cumul);*/
		}
	}
	else
	{
		for (; i < l1; i++)
		{
			/* printf("%d, %c\n", i, n1[l1 - 1 - i]); */
			sum = n1[l1 - 1 - i] + cumul -48;
			if (i == size_r)
				return (0);
			r[size_r - 1 - i] = sum % 10 + 48;
			cumul = sum / 10;
		}
		/*puts("jalon 2");*/
		if (i == size_r)
			return (0);
		else if (cumul != 0)
			r[size_r - 1 - i] = cumul + 48;
	}
	/* printf("%c\n", r[size_r - 1 - i]); */
	for (i = i + cumul; i < size_r ; i++)
		r[size_r - 1 - i] = '\0';
	decal = 0;
	while (r[decal] == '\0')
		decal++;
	for (i = decal; i < size_r; i++)
		r[i - decal] = r[i];
	r[i - decal] = '\0';
	return (r);
}
