#ifndef THREE_CALC_H
#define THREE_CALC_H
int op_add(int, int);
int op_sub(int, int);
int op_div(int, int);
int op_mod(int, int);
int op_mul(int, int);
int (*get_op_func(char *s))(int, int);
/**
* struct op - Strup op
*
* @op: operator
* @f: function
*/
typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;
#endif
