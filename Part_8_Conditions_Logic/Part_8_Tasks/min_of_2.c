/*
    This program calculates the minimum of two given integers 
    by Denis Kuznetsov aka retterhalm
    09.11.2025
*/
#include <stdio.h>

int min( int x, int y);

int main()
{
    // initiate variables
    int x = 0;
    int y = 0;

    //user greeting
    printf("This program calculates minimum of two given integers.\n\n");
    printf("Please enter two integers divided by space.\n\n");
    scanf("%d %d", &x, &y);
    printf("The minimum of %d and %d is : %d\n", x, y, min(x, y));
    return 0;
}

int min(int x, int y)
{
    return (x < y) ? x : y;
}