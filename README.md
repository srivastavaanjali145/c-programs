# C Programs by Anjali Srivastava

Beginner-friendly C programs, written and tested with GCC. Click any program name to open the code.

## Loop Programs (for, while, nested loops)

| # | Program | Loop topic | What it does |
|---|---|---|---|
| 1 | [Multiplication Table](loops/01_multiplication_table.c) | for loop | Prints the table of any number from 1 to 10 |
| 2 | [Factorial](loops/02_factorial.c) | for loop | Finds n! (for example, 5! = 120) |
| 3 | [Fibonacci Series](loops/03_fibonacci_series.c) | for loop | Prints 0 1 1 2 3 5 8 ... up to n terms |
| 4 | [Reverse Number and Palindrome](loops/04_reverse_and_palindrome.c) | while loop | Reverses a number, adds its digits, checks palindrome |
| 5 | [Star Pyramid](loops/05_star_pyramid.c) | nested for loops | Prints a pyramid pattern of stars |

## Mini Projects

| Program | What it does |
|---|---|
| [Calculator](calculator.c) | Menu-driven calculator: add, subtract, multiply, divide, modulus, power |
| [Student Grade Manager](student_grades.c) | Uses structs to store marks, calculates average and grade, finds the topper |

## How to run

```bash
gcc loops/01_multiplication_table.c -o table
./table

gcc calculator.c -o calculator -lm
./calculator
```
