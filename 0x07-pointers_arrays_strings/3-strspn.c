/**
* int _strspn - sdfsfd
* @s: sdfsdf
* @accept: sdfsd
* Return: sdfsdf
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c = c + 1;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}
