#include <stdio.h>
#include <string.h>
#include "main.h"
int main(void)
{
	char str1[] = "";
	char str2[] = "123456879";

	printf("%d\n", strcmp(&str2[9], ""));
	printf("%d : 0\n%d : 9\n", _strlen_recursion(str1), _strlen_recursion(str2));
	return (0);
}
