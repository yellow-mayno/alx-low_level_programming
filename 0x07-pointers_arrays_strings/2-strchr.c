/**
* _strchr - sdfsd
* @s: sdfsdfs
* @c: dsfsdf
* Return: sdfsdf
*/
char *_strchr(char * s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s[i]);
		i++
	}
	return ('\0');
}
