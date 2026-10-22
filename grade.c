#include <stdio.h>
#include <string.h>
#include "grade.h"

void init_grade(grade_t *grade, char *course_name)
{
    if(course_name == NULL)
    {
        printf("No name, cant init grade!!!\n");
        return;
    }

    if(grade == NULL)
    {
        printf("No , cant init grade!!!\n");
        return;
    }

    grade -> grade = '\0';
    grade -> points = -1;
    strncpy(grade -> course_name, course_name, sizeof(grade -> course_name));
    return;

}

void print_grade(const grade_t *grade)
{
    if(grade == NULL)
    {
        printf("No grade!\n");
        return;
    }
    printf("#################\n");
    printf("Course: %s\n", grade -> course_name);
    printf("Points: %2d grade %c\n", grade -> points, grade -> grade);
    printf("#################\n");
}

void copy_grade(grade_t *dst, grade_t *src)
{
    if(dst == NULL && src == NULL)
    {
        return;
    }

    dst -> points = src -> points;
    dst -> grade  = src -> grade;
    strcpy(dst -> course_name, src -> course_name);
}