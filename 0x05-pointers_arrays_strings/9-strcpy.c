/**
 * _strcpy - fkfkf
 * @dest: kjff
 * @src: dfgd
 * Return: fdd
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
