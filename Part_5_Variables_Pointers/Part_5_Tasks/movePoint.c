/*
    This program will calculate the new coordinates of the point moved by given distance realtive to origin
    by Denis Kuznetsov aka Retterhalm
    15.10.2025
*/

#include <stdio.h>

void move(int *px, int *py, int dx, int dy);

void get_coordinates(int *px, int *py, int *dx, int *dy);

int main()
{   
    //User greeting
    //printf("This program will calculate the new coordinates of the point moved by given distance realtive to origin.\n");
    //initiate the variables
    int x = 0; // X-coordinate 
    int y = 0; // Y-coordinate
    int dx = 0; // vove relative to Y-axis
    int dy = 0; // move relative to X-axis

    //function for user input
    get_coordinates(&x, &y, &dx, &dy);

    //calculate the new coordinates

    move(&x, &y, dx, dy);

    return 0;
}

void get_coordinates(int *px, int *py, int *pdx, int *pdy)
{
    //user input
    //printf("Please enter initial coordinates of the point and move amount respectively (X Y DX DY) :\n");
    scanf("%d%d%d%d", px, py, pdx, pdy);
    //printf("You've entered : X = %d, Y = %d, DX = %d, DY = %d.\n", *px, *py, *pdx, *pdy);
}

void move(int *px, int *py, int dx, int dy)
{
    //calculating the result
    *px = *px + dx;
    *py = *py + dy;

    //ouputing the result
    //printf("The new coordinates of the point are : X = %d, Y = %d.\n", *px, *py);
    printf("%d %d\n", *px, *py);
}