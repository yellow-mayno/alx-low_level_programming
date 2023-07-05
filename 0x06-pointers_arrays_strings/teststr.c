#include <stdio.h>
#include <string.h>
int main(void)
{
	char r[10];
	char *r2 = "1000000000";

	printf("%d, %d\n", (int)strlen(r), (int)strlen(r2));
	return (0);
}
