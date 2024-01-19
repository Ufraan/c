/*
   C Program to print Fibonacci series using recursion
*/

#include <stdio.h>
#include <conio.h>

// Function to calculate Fibonacci series using recursion
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;

    // Clear the screen
    clrscr();

    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    printf("Fibonacci Series:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    // Wait for user input before closing the console
    getch();

    return 0;
}
