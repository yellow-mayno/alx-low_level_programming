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
	int l1 = 0, l2 = 0, i, sum = 0, cumul = 0, translation;
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
	}
	for (i = 0; i < l2; i++)
	{
		printf("%c, %c\n", n1[l1 - 1 - i], n2[l2 - 1 - i]);
		sum = n1[l1 - 1 - i] + n2[l2 - 1 - i] - 96 + cumul;
		if (i == size_r)
			return (0);
		printf("%d\n", sum);
		r[size_r - 1 - i] = sum % 10 + 48;
		cumul = sum / 10;
	}
	puts("jalon1");
	if (l1 == l2)
	{
		if (i == size_r)
			return (0);
		else if (cumul != 0)
			r[size_r - 1 - i] = cumul + 48;
	}
	else
	{
		for (; i < l1; i++)
		{
			sum = n1[l1 - 1 - i] + cumul -48;
			if (i == size_r)
				return (0);
			r[size_r - 1 - i] = sum % 10 + 48;
			cumul = sum / 10;
		}
		if (i == size_r)
			return (0);
		else if (cumul != 0)
			r[size_r - 1 - i] = cumul;
	}
	for (; i < size_r; i++)
		r[size_r - 1 - i] = '\0';
	while (r[translation] == '\0')
		translation++;
	for (i = translation; i < size_r; translation++)
		r[i - translation] = r[i];
	return (r);
}
