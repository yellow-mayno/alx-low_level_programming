/**
* string_toopper - dffgds
* @s: dsfsdf
* Return: dfsdf
*/
char *string_toopper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < 123 && s[i] > 96)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
