#include <stdio.h>

/**
 * main - sdfsdfs
 *
 * Return: 0sdfsdfsdf
 */
int main(void)
{
	int i;
	int j;

	for (i = 0x30; i < 0x3A; i++)
	{
		putchar(i);
		if (i == 0x39)
		{
			j = 0x24;
		}
		else
		{
			j = 0x2C;
		}
		putchar(j);
		putchar(0x20);
	}
	putchar(0xA);
	return (0);
}
