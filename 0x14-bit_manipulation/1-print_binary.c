#include <stddef.h>
/**
* binary_to_uint - to unsigned int from binqry char *
* @b: const char *
* Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, cml = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			cml = (cml + (b[i] - 48)) * 2;
		else
			return (0);
		i++;
	}
	return (cml);
}
