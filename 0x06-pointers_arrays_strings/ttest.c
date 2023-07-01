#include <stdio.h>
int main(void)
{
	char c = 'a';
	int i = -20;
	int sum;
	char sumchar;
	char arr[2];

	sum = c + i;
	sumchar = c + i;
	printf("%d\n", sum);
	printf("%c\n", sumchar);
	arr[0] = sum; arr[1] = sumchar;
	printf("%s\n", arr);
	return (0);
}
