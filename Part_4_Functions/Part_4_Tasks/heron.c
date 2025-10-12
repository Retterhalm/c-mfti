/*
    Finding the square of the triangle by provided coordinates of the vertices using Heron's formula
    by Denis Kuznetsov aka Retterhalm
    12.10.2025
*/
#include <stdio.h>
#include <math.h>


double dist(int x1, int y1, int x2, int y2)
{   
    
    // calculating length of the side by the given coordinates of vertices

    int a = x1 - x2;
    int b = y1 - y2;

    return (sqrt(a * a + b * b));
    
}


float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float len1, len2, len3;

    // calling function to calculate the length of the side

    len1 = dist(x1, y1, x2, y2);

    len2 = dist(x2, y2, x3, y3);

    len3 = dist(x3, y3, x1, y1);

    // calculating the semiperimeter

    float p = (len1 + len2 + len3) / 2;

    //Calculating the area of the triangle

    return (sqrt(p*(p - len1) * (p - len2) * (p - len3)));

}

int main()
{
    // declare variables
    int x1, y1, x2, y2, x3, y3;

    //user input
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);

    // funtion call for calculating area
    float res = area(x1, y1, x2, y2, x3, y3);
    
    // outut the result
    printf("%.3f\n", res);
    
    return 0;
}