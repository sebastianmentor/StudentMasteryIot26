#include "studenter.h"
#include <stdio.h>

void print_student(const Student *student)
{
    printf("\n####   Student    #####\n");
    printf("Name =%s\n", student -> name);
    printf("id   =%d\n", student -> id);
}