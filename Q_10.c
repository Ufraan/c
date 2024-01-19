/*
   C program to create an employee structure and display its details using structure.
*/

#include <stdio.h>
#include <conio.h>

struct Employee {
    char name[50];
    int employeeId;
    float salary;
};

int main() {
    // Declare an object of the Employee structure
    struct Employee emp;

    // Input employee details
    printf("Enter employee name: ");
    gets(emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.employeeId);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Clear the screen
    clrscr();

    // Display employee details
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.employeeId);
    printf("Salary: %.2f\n", emp.salary);

    getch();

    return 0;
}
