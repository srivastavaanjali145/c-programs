/*
 * calculator.c - Simple menu-driven calculator in C
 * Supports: addition, subtraction, multiplication, division, modulus, power
 * Compile: gcc calculator.c -o calculator -lm
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    int choice;
    double a, b;

    printf("===== Simple Calculator =====\n");
    while (1) {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
        printf("5. Modulus (integers)\n6. Power\n0. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
        if (choice == 0) {
            printf("Goodbye!\n");
            break;
        }
        if (choice < 1 || choice > 6) {
            printf("Invalid choice, try again.\n");
            continue;
        }

        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &a, &b) != 2) {
            printf("Invalid numbers. Exiting.\n");
            return 1;
        }

        switch (choice) {
            case 1: printf("Result: %.2f\n", a + b); break;
            case 2: printf("Result: %.2f\n", a - b); break;
            case 3: printf("Result: %.2f\n", a * b); break;
            case 4:
                if (b == 0) printf("Error: division by zero!\n");
                else printf("Result: %.2f\n", a / b);
                break;
            case 5:
                if ((int)b == 0) printf("Error: modulus by zero!\n");
                else printf("Result: %d\n", (int)a % (int)b);
                break;
            case 6: printf("Result: %.2f\n", pow(a, b)); break;
        }
    }
    return 0;
}
