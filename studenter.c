#include "studenter.h"
#include "string.h"
#include <stdio.h>

static int student_id_counter = 0;


void print_student(const Student *student)
{
    printf("\n####_____STUDENT____#####\n");
    printf("id          = %d\n", student -> id);
    printf("Name        = %s\n", student -> name);
    printf("Nr of Course= %d\n", student -> totol_courses);
    for(int i = 0; i < (student -> totol_courses); i++)
    {
        print_grade(&(student -> courses)[i]);
    }
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

bool add_grade(Student *student, grade_t *grade)
{
    if(student == NULL && grade == NULL)
    {
        printf("CANT BE NULLLLLL");
        return false;
    }

    if(student -> totol_courses == MAX_NUMBER_OF_COURSE)
    {
        printf("Cant att any more courses :( \n");
        return false;
    }

    copy_grade(&(student -> courses)[student -> totol_courses], grade);
    student -> totol_courses ++;
    return true;
}

void print_all_courses(Student *student)
{
    if(student == NULL)
    {
        return ;
    }

    for(int i = 0; i < (student -> totol_courses); i++)
    {
        printf("Course name: %s\n", (student -> courses)[i].course_name);
    }    
}

void print_all_grades(Student *student)
{
    if(student == NULL)
    {
        return ;
    }

    for(int i = 0; i < (student -> totol_courses); i++)
    {
        printf("Grade %d: %c\n", i+1 ,(student -> courses)[i].grade);
    }    

    
}