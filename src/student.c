#include <stdio.h>
#include "student.h"
void addStudent()
{
    Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter grade: ");
    scanf("%f", &s.grade);


    FILE *file = fopen("data/students.txt", "a");

    if(file == NULL)
    {
        printf("Error opening file\n");
        return;
    }


    fprintf(file, "%d,%s,%.2f\n",
            s.id,
            s.name,
            s.grade);


    fclose(file);

    printf("Student added successfully\n");
}
void displayStudents()
{
    Student s;

    FILE *file = fopen("data/students.txt", "r");

    if(file == NULL)
    {
        printf("No students found\n");
        return;
    }


    while(fscanf(file, "%d,%[^,],%f\n",
                 &s.id,
                 s.name,
                 &s.grade) != EOF)
    {
        printf("\nID: %d", s.id);
        printf("\nName: %s", s.name);
        printf("\nGrade: %.2f\n",
               s.grade);
    }


    fclose(file);
}