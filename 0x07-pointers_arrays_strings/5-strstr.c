/**
* _strstr - sdfsfd
* @haystack: to be given to catle
* @needle: remove the needle before given the haystack to the catle
* Return: sdfsdf
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] != haystack[i + j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return ('\0');
}
