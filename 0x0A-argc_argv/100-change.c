#include <stdio.h>
#include <stdlib.h>
/**
* main - dsfsdf
* @argv: sdfsdf
* @argc: sdfdsf
* Return: sdfdsf
*/
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	i = atoi(argv[1]);
	if (i <= 0)
	{
		puts("0");
		return (0);
	}
	sum = (i / 25) + ((i % 25) / 10) + (((i % 25) % 10) / 5) +
		 ((((i % 25) % 10) % 5) / 2) + ((((i % 25) % 10) % 5) % 2);
	printf("%d\n", sum);
	return (0);
}
