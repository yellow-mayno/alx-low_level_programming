/**
* _strcmp - dfgdfg
* @s1: sdfdsf
* @s2: dsfdsf
* Return: dsfds
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
