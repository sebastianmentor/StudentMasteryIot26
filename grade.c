#include <stdio.h>
#include <string.h>
#include "grade.h"

void init_grade(grade_t *grade, char *course_name)
{
    if(course_name == NULL)
    {
        printf("No name, cant init grade!!!");
        return;
    }

    if(grade == NULL)
    {
        printf("No , cant init grade!!!");
        return;
    }

    grade -> grade = '\0';
    grade -> points = 0;
    strncpy(grade -> course, course_name, sizeof(grade -> course));
    return;

}