#ifndef GRADE_H
#define GRADE_H

typedef struct
{
    char course[20];
    char grade;
    int points;
}grade_t;

void init_grade(grade_t *grade, char *course_name);

#endif