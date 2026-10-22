#ifndef GRADE_H
#define GRADE_H

typedef struct
{
    char course_name[20];
    char grade;
    int points;
}grade_t;

void init_grade(grade_t *grade, char *course_name);
void print_grade(const grade_t *grade);
void copy_grade(grade_t *dst, grade_t *src);

#endif