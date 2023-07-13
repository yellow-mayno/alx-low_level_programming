#include <stdlib.h>
#include <string.h>
/**
* strtow - dfgdfgd
* @str: dsfsdf
* Return: dfgdfg
*/
char **strtow(char *str)
{
	int cnt = 0;
	int i = 1;

	if (str == NULL || !strcmp(str, ""))
		return (NULL);
	if (strlen(str) == 1 && str[0] != 32):uuu
	{
		
	
	while (str[i] != '\0')
	{
		if (str[i] != 10 && str[i - 1] == 10)
			cnt++;
		i++
	}
}
