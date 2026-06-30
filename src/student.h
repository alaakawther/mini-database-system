#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int id;
    char name[50];
    float grade;
} Student;


void addStudent();
void displayStudents();

#endif