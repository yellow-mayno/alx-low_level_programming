#include <stdio.h>
/**
* main - sdfsd
* Return: dsfdsfsd
*/
int main(void)
{
	long n = 612852475143;
	long i;
	long r;
	long j;
	long k;

	for (i = 1; i <= n; i++)
	{
		k = 1;
		if (n % i == 0)
		{
			for (j = 1; j < i; j++)
			{
				if (i % j == 0)
					k = j;
			}
			if (k == 1)
				r = i;
		}
	}
	printf("%ld\n", r);
	return (0);
}
