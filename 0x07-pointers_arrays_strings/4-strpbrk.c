/**
* _strpbrk - sdfsfd
* @s: sdfsdf
* @accept: sdfsd
* Return: sdfsdf
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&accept[j]);
			j++;
		}
		i++;
	}
	return ('\0');
}
