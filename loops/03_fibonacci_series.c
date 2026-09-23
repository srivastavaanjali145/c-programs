/*
 * 03_fibonacci_series.c
 * Topic: for loop
 * Prints the first n terms of the Fibonacci series: 0 1 1 2 3 5 8 ...
 */
#include <stdio.h>

int main(void) {
    int n, i;
    long long a = 0, b = 1, next;

    printf("How many terms? ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
