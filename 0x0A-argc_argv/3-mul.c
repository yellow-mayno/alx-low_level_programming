#include <stdio.h>

int atoi(char *);
/**
* main - dsfsd
* @argv: sdfsdf
* @argc: sdfsdfsdf
* Return: dfdfsdfs
*/
int main(int argc, char *argv[])
{
	int i;
	int isnum;
	int mul;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	for (i = 1; i < 3; i++)
	{
		isnum = 0;
		while (argv[i][isnum] != '\0')
		{
			if ((argv[i][isnum] > 57 || argv[i][isnum] < 48) && argv[i][isnum] != '-')
			{
				puts("Error");
				return (1);
			}
			isnum++;
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (mul);
}

/**
* atoi - sdfsdfsd
* @s: sdfsdf
* Return: dsfgdfg
*/
int atoi(char *s)
{
	int sum = 0;
	int sign = 1;
	int i = 1;

	if (*s == '-')
		sign = -1;
	else
		i--;
	while (s[i] != '\0')
	{
		sum = sum * 10 + s[i] - 48;
		i++;
	}
	return (sum * sign);
}
