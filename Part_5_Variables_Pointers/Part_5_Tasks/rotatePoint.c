/*
    This program will calculate new coordinates of the point rotated relative to the origine by the given angle

*/


#include <stdio.h>
#include <math.h>

void rotate_point(double *px, double *py, double degrees);

void get_coordinates(double *px, double *py, double *degrees);

int main()
{   
    // user greeting
    printf("This program will calculate new coordinates of the point rotated relative to the origin by the given angle\n");
    
    //initializing variavbles
    double x = 0; // X-coordinate
    double y = 0; // Y-coordinate
    double degrees = 0; // angle

    //Calling the function for user input
    get_coordinates(&x, &y, &degrees);

    //Calling the function to calculate
    rotate_point(&x, &y, degrees);

    return 0;
}

void get_coordinates(double *px, double *py, double *pdegrees)
{
    //User input
    printf("Please enter the coordinates and angle(deg) (X Y Angle) :\n");
    scanf("%lf%lf%lf", px, py, pdegrees);
    printf("You've entered: X = %lf, Y = %lf, Angle = %lf.\n", *px, *py, *pdegrees);
}

void rotate_point(double *px, double *py, double degrees)
{
    //converting degrees to radians

    double radians = degrees * M_PI / 180;

    //calculating the result

    double xNew = *px * cos(radians) - *py * sin(radians);
    double yNew = *px * sin(radians) + *py * cos(radians); 

    *px = xNew;
    *py = yNew;

    // outputing the result
    printf("New coordinates of the point are : X = %lf, Y = %lf.\n", *px, *py);
    
}