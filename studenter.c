#include "studenter.h"
#include "string.h"
#include <stdio.h>

static student_id_counter = 0;


void print_student(const Student *student)
{
    printf("\n####_____STUDENT____#####\n");
    printf("id   =%d\n", student -> id);
    printf("Name =%s\n", student -> name);
    printf("Test");
}

void init_student(Student *student, char *name)
{
    if(student == NULL)
    {
        printf("Cant init NULL student mr noob!\n");
    }

    if(name == NULL)
    {
        printf("Cant init with no name!!\n");
    }

    student -> id = student_id_counter + 1;
    student_id_counter++;

    strncpy(student -> name, name, sizeof(student -> name));
    student -> totol_courses = 0;
}
