int is_in(char *, char);
/**
* cap_string - dfggfd
* @s: sdfsd
* Return: dsfsdf
*/
char *cap_string(char *s)
{
	int c, i = 1;
	char separator[]
		 = {',', ';', '.', '!', '?', '\"', '(', ')', '{', '}', 9, 10, 32, '\0'};

	c = is_in(separator, s[0]);
	if (s[0] < 123 && s[0] > 96)
		s[0] = s[0] - 32;
	while (s[i] != '\0')
	{
		if (s[i] < 123 && s[i] > 96 && c)
		{
			s[i] = s[i] - 32;
			c = 0;
		}
		else if ((s[i] > 47 && s[i] < 58) || (s[i] > 64 && s[i] < 91))
			c = 0;
		else
			c = c + is_in(separator, s[i]);
		i++;
	}
	return (s);
}

/**
* is_in - search if there is c in s
* @c: character
* @s: string
* Return: 0 or 1
*/
int is_in(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
