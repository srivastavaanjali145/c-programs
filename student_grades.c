/*
 * student_grades.c - Student grade manager in C
 * Reads names and marks of students, then shows each student's
 * average and grade, plus the class topper.
 * Compile: gcc student_grades.c -o student_grades
 */
#include <stdio.h>

#define MAX_STUDENTS 50
#define SUBJECTS 3

struct Student {
    char name[50];
    float marks[SUBJECTS];
    float average;
    char grade;
};

char getGrade(float avg) {
    if (avg >= 90) return 'A';
    if (avg >= 75) return 'B';
    if (avg >= 60) return 'C';
    if (avg >= 40) return 'D';
    return 'F';
}

int main(void) {
    struct Student s[MAX_STUDENTS];
    int n, i, j, topper = 0;

    printf("===== Student Grade Manager =====\n");
    printf("How many students (1-%d)? ", MAX_STUDENTS);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        float total = 0;
        printf("\nStudent %d name: ", i + 1);
        scanf("%49s", s[i].name);
        for (j = 0; j < SUBJECTS; j++) {
            do {
                printf("  Marks in subject %d (0-100): ", j + 1);
                if (scanf("%f", &s[i].marks[j]) != 1) return 1;
            } while (s[i].marks[j] < 0 || s[i].marks[j] > 100);
            total += s[i].marks[j];
        }
        s[i].average = total / SUBJECTS;
        s[i].grade = getGrade(s[i].average);
        if (s[i].average > s[topper].average) topper = i;
    }

    printf("\n%-15s %-10s %-6s\n", "Name", "Average", "Grade");
    printf("-------------------------------\n");
    for (i = 0; i < n; i++)
        printf("%-15s %-10.2f %-6c\n", s[i].name, s[i].average, s[i].grade);

    printf("\nClass topper: %s with average %.2f\n",
           s[topper].name, s[topper].average);
    return 0;
}
