#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> <num3> ... <numN>\n", argv[0]);
        return 1;
    }

    int sum = 0;

    // Calculate the sum of integers passed as command-line arguments
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        sum += num;
    }

    // Print the result
    printf("The sum of integers is: %d\n", sum);

    return 0;
}
