#ifndef STUDENTER_H
#define STUDENTER_H

#include "grade.h"

#define STUDENT_NAME_LEN 40
#define NUMBER_OF_COURSE 10

typedef struct{
    int id;
    char name[STUDENT_NAME_LEN];
    grade_t courses[NUMBER_OF_COURSE];
    int totol_courses;
}Student;

void print_student(const Student *student);
void init_student(Student *student, char *name);

#endif