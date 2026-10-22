#include <stdio.h>
#include "studenter.h"

int main(void)
{   
    printf("Test 1\n");
    Student sebastian = {1, "Sebastian"};
    print_student(&sebastian);

    return 0;
}