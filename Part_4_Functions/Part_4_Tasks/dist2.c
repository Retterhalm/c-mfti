/*
    Distance calculation between two points on the plain. V2
    By Denis Kuznetsov aka Retterhalm
    12.10.2025

*/

#include <stdio.h>
#include <math.h>


double dist(int x1, int y1, int x2, int y2)
{   
    

    int a = x1 - x2;
    int b = y1 - y2;

    return (sqrt(a * a + b * b));
    
}

int main()
{      
    //declare variables for coordinates
    int  x1, y1, x2, y2;
    //user greeting
    printf("Hello! This program will calculate the distance between two points on the plane by the given coordinates\n\n");
    
    //user input
    printf("Please, enter the coordinates of the initial point (X Y): ");
    scanf("%d%d", &x1, &y1);
    printf("Please, enter the coordinates of the ending point (X Y): ");
    scanf("%d%d", &x2, &y2);

    // Function call
    double distance = dist(x1, y1, x2, y2);

    //Output
    printf("The distance between two points is %.2lf\n", distance);

    return 0;
}
