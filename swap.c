// swaps two integers using pointers

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
 // swap(x, y); expecting two addresses, so the swap can take place. by following those addresses
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}



// not going to work, bc making a copy, not changing original

// void swap(int a, int b)
// {
//     int tmp = a;
//     a = b;
//     b = tmp;
// }