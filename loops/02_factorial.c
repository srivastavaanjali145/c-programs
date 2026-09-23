/*
 * 02_factorial.c
 * Topic: for loop
 * Finds the factorial of a number (n! = 1 x 2 x ... x n).
 */
#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number (0-20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Please enter a number between 0 and 20.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}
