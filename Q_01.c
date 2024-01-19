/*
  C program to find an element using linear search with the help of a function.
*/

#include <stdio.h>
#include <conio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return the index of the key if found
        }
    }
    return -1;  // Return -1 if the key is not found
}

int main() {
    clrscr(); // Clear the console screen

    int size, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform linear search
    int index = linearSearch(arr, size, key);

    // Display the result
    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    getch(); // Wait for a key press before closing the console
    return 0;
}
