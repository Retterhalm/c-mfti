/*
    Mirror a segment with given coordinates(X, Y) relative to the X-axis
    by Denis Kuznetsov aka Retterhalm
    15/10/2025
*/


#include <stdio.h>

void mirror_seg(int *px1, int *py1, int *px2, int *py2);

int main()
{       
        printf("This program will invert the given coordinates of the segment (X1 Y1 X2 Y2) relative to the X-axis\n ");
        // initialize variables for coordinates

        int x1 = 0;
        int y1 = 0;
        int x2 = 0;
        int y2 = 0;

        //user input
        printf("Please enter the cordinates of the segment using the pattern (X1 Y1 X2 Y2)\n");
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

        printf("You've entered: X1 = %d, Y1 = %d, X2 = %d, Y2 = %d.\n", x1, y1, x2, y2);

        //function call
        mirror_seg(&x1, &y1, &x2, &y2);

    return 0;
}

void mirror_seg(int *px1, int *py1, int *px2, int *py2)
{
    //Calculations
    *py1 = -*py1;
    *py2 = -*py2;

    // output the result
    printf("Inverted coordinates of the segment are : ");
    printf("X1 = %d, Y1 = %d, X2 = %d, Y2 = %d.\n", *px1, *py1, *px2, *py2);

}