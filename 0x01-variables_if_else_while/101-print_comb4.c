#include <stdio.h>

/**
 * main - sdfsdfsdf
 *
 * Return: 0 dsfsdfs
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
			putchar(i);
			putchar(j);
			putchar(k);

			if (i == 55)
				break;
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
