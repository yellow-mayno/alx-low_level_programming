#include <stdio.h>


char *argstostr(int, char **);
int main(int argc, char **argv)
{
	char *a, *b, *c;
	char *cat;

	a = "it's ";
	b = "fkn ";
	c = "over\n";
	cat = argstostr(argc, argv);
	printf("%s\n", cat);
	return (0);
}
