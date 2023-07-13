#include <stdlib.h>
#include <stdio.h>
/**
* argstostr - dsfgdsf
* @ac: sdfsdf
* @av: sdfsdfsdf
* Return: sdfsdfs
*/
char *argstostr(int ac, char **av)
{
	int i = 0;
	int size = 10;
	int j, sptr = 0;
	char *cat;

	if (ac == 0 || av == NULL)
		return (NULL);
	cat = malloc(size * sizeof(int));
	for (; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (sptr == size)
			{
				size += 10;
				cat = realloc(cat, size * sizeof(char));
				if (cat == NULL)
				{
					free(cat);
					return (NULL);
				}
			}
			cat[sptr] = av[i][j];
			sptr++;
			j++;
		}
		cat = realloc(cat, (size + 10) * sizeof(char));
		if (cat == NULL)
		{
			free(cat);
			return (NULL);
		}
		cat[sptr] = '\n';
		sptr++;
	}
	cat[sptr] = '\0';
	return (cat);
}
