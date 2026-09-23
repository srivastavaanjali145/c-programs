/*
 * 05_star_pyramid.c
 * Topic: nested for loops
 * Prints a pyramid of stars. Example for 4 rows:
 *
 *        *
 *       ***
 *      *****
 *     *******
 */
#include <stdio.h>

int main(void) {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++)     /* spaces */
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)    /* stars  */
            printf("*");
        printf("\n");
    }
    return 0;
}
