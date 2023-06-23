#include <stdio.h>
/**
* main - dsqfsdf
* Return: 0 dsfsdf
*/
int main(void)
{
	int n, i, S;
	long ap, app;

	n = 96;
	ap = 2;
	app = 1;
	S = 2;
	for (i = 0; i < n; i++)
	{
		if ((ap + app) % 2 == 0)
			S = S + ap + app;
		ap = ap + app;
		app = ap - app;
		if (ap > 4000000)
			break;
	}
	printf("%d\n", S);
	return (0);
}
