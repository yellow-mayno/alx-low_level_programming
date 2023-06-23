#include <stdio.h>
/**
* main - dsqfsdf
* Return: 0 dsfsdf
*/
int main(void)
{
	int n, i;
	long ac, ap, app;

	n = 50;
	ap = 2;
	app = 1;
	printf("%ld\n", app);
	printf("%ld\n", ap);
	for (i = 0; i < n; i++)
	{
		ac = ap + app;
		printf("%ld\n", ac);
		app = ap;
		ap = ac;
	}
	return (0);
}
