#include <stdio.h>
#include "header.h"

int main(void)
{
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
	printf("%c", add.op);
	return (0);
}	
