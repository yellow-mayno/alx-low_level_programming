#include <stdio.h>
/**
* main - dsqfsdf
* Return: 0 dsfsdf
*/
int main(void)
{
	int n, i;
	long ap, app;

	n = 96;
	ap = 2;
	app = 1;
	printf("%ld", app);
	printf(", %ld", ap);
	for (i = 0; i < n; i++)
	{
		if ((ap + app) % 2 == 0)
			printf(", %ld", ap + app);
		ap = ap + app;
		app = ap - app;
		if (ap > 4000000)
			break;
	}
	putchar(10);
	return (0);
}
