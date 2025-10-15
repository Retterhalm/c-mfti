/*
    Test for printing out adresses using pointers
*/
#include <stdio.h>


int main()
{       
        int x = 7;
        int* px = &x;
        int** ppx = &px;
        printf("%d\n", x);
        printf("%p\n", px);
        printf("%p\n", ppx);
        printf("%d\n%p\n", *px, *ppx);



    return 0;
}