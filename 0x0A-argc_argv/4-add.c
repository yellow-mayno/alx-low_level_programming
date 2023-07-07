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
	int sum = 0;

	if (argc == 1)
		return (0);
	for (i = 1; i < argc; i++)
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
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
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
