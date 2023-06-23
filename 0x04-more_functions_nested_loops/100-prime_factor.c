#include <stdio.h>
/**
* main - dsfsfd
* Return: sdfsfd
*/
int main(void)
{
	long n = 612852475143;
	long x, i, r;

	x = n;
	i = 2;
	while (x != 1)
	{
		if (x % i == 0)
		{
			while (x % i == 0)
				x = x / i;
			r = i;
		}
		i++;
	}
	printf("%ld\n", r);
	return (0);
}
