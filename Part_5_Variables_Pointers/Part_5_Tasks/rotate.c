/*
    This program calculates new coordinates of given vertices of a rectangle rotated by 90 degrees.
    by Denis Kuznetov aka Retterhalm
    16.10.2025
*/


#include <stdio.h>

void rotateC(int *x1, int *y1, int *x2, int *y2);
void get_coordinates(int *px1, int *py1, int *px2, int *py2);
void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc);


int main()
{   
    //User greeting
    printf("This program calculates new coordinates of given vertices of a rectangle rotated by 90 degrees.\n");

    //initializing variavbles
    int xlt = 0; // X-coordinate left top
        int ylt = 0; // Y-coordinate left top
        int xrb = 0; // X-coordinate right bottom
        int yrb = 0; // Y-coordinate right bottom
        

    //calling function to get coordinates
    get_coordinates(&xlt, &ylt, &xrb, &yrb);


    //calling function to calculate new coordinates of the given point
    rotateC(&xlt, &ylt, &xrb, &yrb);


    return 0;
}

void get_coordinates(int *pxlt, int *pylt, int *pxrb, int *pyrb)
{
    // user input
    printf("Please enter the coordinates of the left top and right bottom vertices respectively ( Xlt Ylt Xrb Yrb) : \n");
    scanf("%d%d%d%d", pxlt, pylt, pxrb, pyrb);
    printf("You've entered Xlt = %d, Ylt = %d Xrb = %d Yrb = %d\n", *pxlt, *pylt, *pxrb, *pyrb);
}



void rotateC(int *x1, int *y1, int *x2, int *y2)
{
    //calculating the results
    int xc = (*x1 + *x2) /2;
    int yc = (*y1 + *y2) /2;
    int xtemp = xc + (*y1 -yc);
    *y1 = yc - (*x1 - xc);
    *x1 = xtemp;
    xtemp = xc + (*y2 - yc) ;
    *y2 = yc - (*x2 - xc) ;
    *x2 = xtemp;

    printf("%d %d %d %d\n", *x2, *y1, *x1, *y2);
}
