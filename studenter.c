#include "studenter.h"
#include <stdio.h>

void print_student(const Student *student)
{
    printf("\n####_____STUDENT____#####\n");
    printf("id   =%d\n", student -> id);
    printf("Name =%s\n", student -> name);
}