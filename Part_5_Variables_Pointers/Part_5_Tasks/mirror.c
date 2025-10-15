/*
    Mirror point with given coordinates(X, Y) relative to the Y-axis
    by Denis Kuznetsov aka Retterhalm
    15/10/2025
*/

#include <stdio.h>

void mirror(int* px, int* py);

int main()
{
        //User Greeting
        printf("This program will invert coordinates of the point relative to the Y-axis.\n");

        // initialize variables for coordinates
        
        int x = 0;
        int y = 0;

        //user input
        printf("Please input the coordinates of the point (X Y): \n");
        scanf("%d%d", &x, &y);

        //function call
        mirror(&x, &y);

    return 0;
}

void mirror(int* px, int* py)
{
    
    
    //calculation

    
    *px = 0 - *px;

    //output the result
    printf("%d %d\n", *px, *py);

}