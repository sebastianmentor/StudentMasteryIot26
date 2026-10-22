#ifndef STUDENTER_H
#define STUDENTER_H

#define STUDENT_NAME_LEN 40

typedef struct{
    int id;
    char name[STUDENT_NAME_LEN];
}Student;

void print_student(const Student *student);

#endif