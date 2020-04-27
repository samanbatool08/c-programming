#include <string.h> //strlen func
#include <stdio.h>

bool compare_strings(char *a, char *s);


int main(void)
{
    char *s = "DAVID";
    char *t = "DAVID";

    if (compare_strings(s, t))
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}

bool compare_strings(char *a, char *s)
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