#include <stdio.h>
/**
* main - sdfsdf
* Return: sdfsdfs
*/
int main(void)
{
	int n, i, S;

	n = 1024;
	S = 0;
	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			S = S + i;
	}
	printf("%d\n", S);
	return (0);
}
