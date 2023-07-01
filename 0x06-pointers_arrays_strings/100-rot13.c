/**
* rot13 - sdfsd
* @s: dsfsdfs
* Return: sdfdsf
*/
char *rot13(char *s)
{
	int i = 0, j;
	char change1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char change2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

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
