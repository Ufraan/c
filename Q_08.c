/* 
   Write a C program to create a student structure and display its details.
*/

#include <stdio.h>
#include <conio.h>

// Define the structure for student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Declare a variable of type Student
    struct Student student1;

    // Input details of the student
    clrscr();  // Clear the screen
    printf("Enter student details:\n");
    printf("Name: ");
    gets(student1.name);
    printf("Roll Number: ");
    scanf("%d", &student1.rollNumber);
    printf("Marks: ");
    scanf("%f", &student1.marks);

    // Display details of the student
    clrscr();  // Clear the screen
    printf("Student Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    getch();  // Wait for a key press before closing the console
    return 0;
}
