#include <stdio.h>
/**
* main - dsqfsdf
* Return: 0 dsfsdf
*/
int main(void)
{
	int n, i;
	long ap, app;

	n = 50;
	ap = 2;
	app = 1;
	printf("%ld\n", app);
	printf("%ld\n", ap);
	for (i = 0; i < n; i++)
	{
		printf("%ld\n", ap + app);
		ap = ap + app;
		app = ap - app;
	}
	return (0);
}
