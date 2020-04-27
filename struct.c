// using structs

#include <cs50.hh>
#include <stdio.h>

#include "struct.h"

int main(void)
{
    // space for students
    int enrollment = get_int("Enrollment: ");
    student students[enrollment];

    // prompt for students' names and dorms 
    for (int i = 0; i < enrollment; i++)
    {
        students[i].name = get_string("Name: ");
        students[i].dorm = get_string("Dorm: ");
    }

}


// represents a stuudent

// typedef struct
// {
//     char *name;
//     char *dorm;
// }
// student;