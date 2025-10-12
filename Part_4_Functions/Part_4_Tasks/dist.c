#include <stdio.h>
#include <math.h>

/*
    Distance calculation between two points on the plain.
    By Denis Kuznetsov aka Retterhalm
    12.10.2025

*/
void dist()
{   
    //declare variables for coordinates
    int  x1, y1, x2, y2;
    //user greeting
    printf("Hello! This program will calculate the distance between two points on the plane by the given coordinates\n\n");
    
    //user input
    printf("Please, enter the coordinates of the initial point(X Y)");
    scanf("%d%d", &x1, &y1);
    printf("Please, enter the coordinates of the ending point(X Y)");
    scanf("%d%d", &x2, &y2);

    int a = x1 - x2;
    int b = y1 - y2;

    int distance = (sqrt(a * a + b * b));
    printf("The distance between two points is %d\n", distance);
}

int main()
{      
    dist();
    return 0;
}