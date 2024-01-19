/* 
   Write a C program to swap two numbers using pass by reference
*/

#include <stdio.h>
#include <conio.h>

// Function to swap two numbers using pass by reference
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Input second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Displaying numbers before swapping
    printf("\nBefore swapping: \n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Swapping numbers using the swap function
    swap(&num1, &num2);

    // Displaying numbers after swapping
    printf("\nAfter swapping: \n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    clrscr();
    getch();

    return 0;
}
