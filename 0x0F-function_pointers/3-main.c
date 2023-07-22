#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - total
* @argc: 4
* @argv: args
* Return: 0
*/
int main(int argc, char **argv)
{
	int (*f)(int, int);

	f = get_op_func(argv[2]);
	if (argc != 4)
	{
		puts("Error");
		return (98);
	}
	else if (f == NULL)
	{
		puts("Error");
		return (99);
	}
	else if ((f == op_div || f == op_mod) && atoi(argv[3]) == 0)
	{
		puts("Error");
		return (100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
