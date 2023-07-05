#include <stdio.h>

int _sqrt_recursion(int);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	
	puts("*********************");
	r = _sqrt_recursion(-16);
	puts("*********************");
	printf("%d\n", r);
	return (0);
}
