#include <stdio.h>
#include "main.h"
int main(void)
{
	char s1[11] = "abc++---420";
	int i = _atoi(s1);
	printf("%d\n",  i);
	return 0;
}
