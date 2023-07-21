#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - choose what function
* @s: operator
* Return: fun
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t add;
	add.op = "+";
	add.f = op_add;
	op_t sub;
	sub.op = "-";
	sub.f = op_sub;
	op_t mul;
	mul.op = "*";
	mul.f = op_mul;
	op_t mod;
	mod.op = "%";
	mod.f = op_mod;
	op_t div;
	div.op = "/";
	div.f = op_div;

	op_t array[5] = {add, sub, div, mod, mul};
	while (array[i].op[0] != s[0] && i < 5)
		i++;
	if (i == 5)
		return (NULL);
	else
		return (array[i].f);
}
