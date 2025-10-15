/*
    This program will calculate the coordinates of the center of a rectangle  given the coordinates of 
    the vertices of its diagonal(Left top and right bottom)
    by Denis Kuznetsov aka Retterhalm
    15.10.2025
*/


# include <stdio.h>

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc); // prototype
void get_coordinates(int *pxlt, int *pylt, int *pxrb, int *pyrb);

int main()
{
        // user greeting
        printf("This program will calculate the coordinates of the center of a rectangle  given the coordinates of the vertices of its diagonal(Left top and right bottom)\n");

        // initialising variables
        int xlt = 0; // X-coordinate left top
        int ylt = 0; // Y-coordinate left top
        int xrb = 0; // X-coordinate right bottom
        int yrb = 0; // Y-coordinate right bottom
        int xc = 0; // X-coordinate center
        int yc = 0; // Y-coordinate center

        // calling the function for user input
        get_coordinates(&xlt, &ylt, &xrb, &yrb);

        //calculating the result
         center(xlt, ylt, xrb, yrb, &xc, &yc);

    return 0;


}

void get_coordinates(int *pxlt, int *pylt, int *pxrb, int *pyrb)
{
    //user input
    printf("Please enter the coordinates of left top and right bottom vertices of the rectangle respectively (Xlt Ylt Xrb Yrb).\n");
    scanf("%d%d%d%d", pxlt, pylt, pxrb, pyrb);
    printf("You've entered : Xlt = %d, Ylt = %d, Xrb = %d, Yrb = %d.\n", *pxlt, *pylt, *pxrb, *pyrb);

}

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc)
{
    //calculating the result
    *pxc = (xlt + xrb) / 2;
    *pyc = (ylt + yrb) / 2;
    //outputing the result
    printf("The coordinates of the center of the given rectangle are : X = %d, Y = %d.\n", *pxc, *pyc);
    printf("%d %d", *pxc, *pyc);
}