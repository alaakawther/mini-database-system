#include <stdio.h>
#include "student.h"

int main()
{
    int choice;

    while(1)
    {
        printf("\n----- Student Management System -----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");

        printf("Choose: ");
        scanf("%d", &choice);


        if(choice == 1)
        {
            addStudent();
        }
        else if(choice == 2)
        {
            displayStudents();
        }
        else if(choice == 3)
        {
            printf("Goodbye!\n");
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

// main.c
//    |
//    | calls
//    ↓
// student.c
//    |
//    | reads/writes
//    ↓
// data/students.txt