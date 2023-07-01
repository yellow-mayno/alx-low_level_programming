/**
* leet - sdfsd
* @s: dsfsdfs
* Return: sdfdsf
*/
char *leet(char *s)
{
	int i = 0, j;
	char change1[] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't'};
	char change2[] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7'};

	while (s[i] != '\0')
	{
		j = 0;
		while (change1[j] != '\0')
		{
			if (change1[j] == s[i])
			{
				s[i] = change2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
