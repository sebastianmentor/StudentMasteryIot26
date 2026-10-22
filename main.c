#include <stdio.h>
#include "studenter.h"

int main(void)
{   
    printf("Test 1\n");
    Student sebastian;
    init_student(&sebastian, "Sebastian");
    print_student(&sebastian);
    grade_t g1,g2,g3;

    init_grade(&g1, "Math");
    init_grade(&g2, "Programming");
    init_grade(&g3, "Cooking");

    if(add_grade(&sebastian, &g1))
    {
        printf("Success, added new grade!\n");
    }
    if(add_grade(&sebastian, &g2))
    {
        printf("Success, added new grade!\n");
    }
    if(add_grade(&sebastian, &g3))
    {
        printf("Success, added new grade!\n");
    }

    print_student(&sebastian);
    printf("\n\n");
    print_all_courses(&sebastian);

    return 0;
}