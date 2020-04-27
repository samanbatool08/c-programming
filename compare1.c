#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_int("i: ");
    string t = get_int("j: ");

    if (s == t)
    {
        printf("same\n")
    }
    else
    {
        printf("different\n")
    }
}