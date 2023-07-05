#include <stdio.h>
/**
* _atoi * sdfsdf
* @s : dsfsdfsfd
* Return: dsfsdfsfd
*/
int _atoi(char *s)
{
	int i, sign, start, end, cumul;

	i = 0;
	sign = 1;
	start = -1;
	end = -1;

	printf("beginning");
	while (s[i] != '\0')
	{
		if (s[i] = '-')
			sign = -1 * sign;
		if ((s[i] <= 57 && s[i] >= 48) && start == -1)
			start = i;
		if ((s[i] < 48 || s[i] > 57) && start != -1)
		{
			end = i;
			break;
		}
		printf("%c\n", s[i]);
		i++;
	}
	printf("%d\n",sign);
	printf("%d,%d\n", start, end);
	cumul = 0;
	for (i = start; i < end; i++)
		cumul = cumul * 10 + (s[i] - 48);
	return (sign * cumul);
}
