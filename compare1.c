#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("s: ");
    string t = get_string("s: ");

    if (s == t)
    {
        printf("same\n")
    }
    else
    {
        printf("different\n")
    }
}

// this will always defualt to different because both strings are being stored in different location in memory. even if it is the same word. 
// reference RAM and memory. strings are returned by their address (char stars) because it is not a data type like int or float 

//see compare2 for correct function 