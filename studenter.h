#ifndef STUDENTER_H
#define STUDENTER_H

#include <stdbool.h>
#include "grade.h"

#define STUDENT_NAME_LEN 40
#define MAX_NUMBER_OF_COURSE 10

typedef struct{
    int id;
    char name[STUDENT_NAME_LEN];
    grade_t courses[MAX_NUMBER_OF_COURSE];
    int totol_courses;
}Student;

void print_student(const Student *student);
void init_student(Student *student, char *name);
bool add_grade(Student *student, grade_t *grade);
void print_all_courses(Student *student);

#endif