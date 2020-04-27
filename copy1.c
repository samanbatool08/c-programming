#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get a string
    char *s = get_string("s: ");
    if (!s)
    {
        return 1;
    }

    // allocate memore for another string
    char *t = malloc( strlen(s) + 1);
    if (!t)
    {
        return 1;
    }

    // copy string into memory 
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    // capitalize first letter in copy only
     if (strlen(t) > 0)
     {
         t[0] = toupper(t[0]);
     }

     // print strings
     printf("s: %s\n", s)
     printf("t: %s\n", t)
}
 