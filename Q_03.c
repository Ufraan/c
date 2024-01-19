/*
    C Program to find GCD using recursion
*/

#include <stdio.h>
#include <conio.h>

// Function to find GCD using recursion
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return findGCD(b, a % b);
    }
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers to find GCD:\n");
    scanf("%d %d", &num1, &num2);

    // Calculate and display the GCD
    printf("GCD of %d and %d is: %d\n", num1, num2, findGCD(num1, num2));

    // Use clrscr to clear the screen
    clrscr();

    // Use getch to wait for a key press before closing the console window
    getch();

    return 0;
}
