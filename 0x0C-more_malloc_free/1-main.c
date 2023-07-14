#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char **argv)
{
    char *concat;

    concat = string_nconcat(argv[1], argv[2], (int) *argv[3] - 48);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
