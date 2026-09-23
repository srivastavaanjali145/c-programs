/*
 * 01_multiplication_table.c
 * Topic: for loop
 * Prints the multiplication table of a number from 1 to 10.
 */
#include <stdio.h>

int main(void) {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
