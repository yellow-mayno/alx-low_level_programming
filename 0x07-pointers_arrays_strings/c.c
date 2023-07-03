#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Wor";

    char *ptr = strspn(str1, str2);

    printf("Length of initial segment: %s\n", ptr);

    return 0;
}
