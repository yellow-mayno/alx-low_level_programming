#include <stdio.h>
/**
* main - kjdshfkjshdfkjds
* Return: no return
*/
void main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz");
	putchar(10);
}
