// C program to find factorial using recursion

#include <stdio.h>
#include <conio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Declare variables
    int num;

    // Ask user for input
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    // Clear the screen
    clrscr();

    // Display the factorial using recursion
    printf("Factorial of %d = %d\n", num, factorial(num));

    // Wait for a key press
    getch();

    return 0;
}
