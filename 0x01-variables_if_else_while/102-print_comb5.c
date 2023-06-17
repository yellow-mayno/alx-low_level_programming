#include <stdio.h>
/**
 * main -sdfsdfs
 *
 * Return: 0 dsfsdfsfds
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			l = j;
			for (k = i; k < 10; k++)
			{
				for (; l < 10; l++)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(32);
					putchar(k + 48);
					putchar(l + 48);
					if (i == 9 && j == 8 && l == 9)
					{
						putchar(10);
						return (0);
					}
					putchar(44);
					putchar(32);
				}
				l = 0;
			}
		}
	}
}
