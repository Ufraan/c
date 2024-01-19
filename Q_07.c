/*
Question 7: Write a C program to swap 2 numbers using pass by value
*/

#include <stdio.h>
#include <conio.h>

// Function prototype
void swap(int a, int b);

int main() {
    int num1, num2;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the original numbers
    printf("\nOriginal numbers: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function with pass by value
    swap(num1, num2);

    // Display the swapped numbers
    printf("\nSwapped numbers: num1 = %d, num2 = %d\n", num1, num2);

    getch(); // Wait for a key press
    clrscr(); // Clear the screen

    return 0;
}

// Function to swap two numbers using pass by value
void swap(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}
