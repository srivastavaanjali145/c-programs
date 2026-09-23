/*
 * 04_reverse_and_palindrome.c
 * Topic: while loop
 * Reverses a number, finds the sum of its digits,
 * and checks whether it is a palindrome (e.g. 121).
 */
#include <stdio.h>

int main(void) {
    int num, original, digit;
    int reversed = 0, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);
    original = num;

    while (num > 0) {
        digit = num % 10;               /* take the last digit   */
        reversed = reversed * 10 + digit;
        sum = sum + digit;
        num = num / 10;                 /* remove the last digit */
    }

    printf("Reversed number: %d\n", reversed);
    printf("Sum of digits : %d\n", sum);

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
    return 0;
}
