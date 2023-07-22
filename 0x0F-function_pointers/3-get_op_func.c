#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* get_op_func - choose what function
* @s: operator
* Return: fun
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t array[6] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
	printf("something ffs\n"); 
	while (strcmp(array[i].op, s) && i < 6)
		i++;
	printf("%d\n", i);
	return (array[i].f);
}
