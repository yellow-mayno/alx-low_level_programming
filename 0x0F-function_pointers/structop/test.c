#include <stdio.h>

typedef struct op
{
	char c;
	char (*f)(char);
} op_t;

char func(char i)
{
	return (i);
}

int main(void)
{
	op_t elem1;

	elem1.c = 'f';
	elem1.f = func;
	printf("%c\t%c", elem1.c, elem1.f(10));
	return (0);
}
