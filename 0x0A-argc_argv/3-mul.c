#include <stdio.h>
#include <stdlib.h>
/** 
* main - dsfsd
* @argv: sdfsdf
* @argc: sdfsdfsdf
* Return: dfdfsdfs
*/
int main(int argc, char *argv[])
{
	int i;
	int isnumerical;
	int mul;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	for (i = 1; i < 3; i++)
	{
		isnumerical = 0;
		while (argv[i][isnumerical] != '\0')
		{
			if (argv[i][isnumerical] > 57 || argv[i][isnumerical] < 48)
			{
				puts("Error");
				return (1);
			}
			isnumerical++;
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (mul);
}
