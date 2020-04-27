#include <cs50.h> //getstring func
#include <string.h> //strlen func
#include <stdio.h>

bool compare_strings(string a, s);


int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");

    if (compare_strings(s, t))
    {
        printf("same\n")
    }
    else
    {
        printf("different\n")
    }
}

bool compare_strings(string a, s)
    //compare length first
{
    if (strlen(a) != strlen(b))
    {
        return false;
    }
    //compare each character
    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }

    return true;
}