/* 
   C Program to find the sum of first n natural numbers using a function.
*/

#include <stdio.h>
#include <conio.h>

// Function to calculate the sum of first n natural numbers
int sumOfNaturalNumbers(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int n;

    // Input: Ask the user for the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum using the function
    int result = sumOfNaturalNumbers(n);

    // Output: Display the result
    printf("Sum of first %d natural numbers is: %d\n", n, result);

    // Using clrscr() to clear the screen
    clrscr();

    // Using getch() to wait for a key press before closing the console window
    printf("Press any key to exit...");
    getch();

    return 0;
}
