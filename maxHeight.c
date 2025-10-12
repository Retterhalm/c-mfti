/*
    Max Height calculation of thrown object.

    Description: " Тело брошено под углом αα градусов к горизонту со скоростью v0v0​ м/с.
    На какую максимальную высоту hh метров поднимется тело?"

    By Denis Kuznetsov aka Retterhalm
    11.10.2025

*/
#include <stdio.h>
#include <math.h>

#define g 9.81

int main(){
        
        double 
            a,  // angle in radians
            v0, // initial speed in m/s
            h; // max height

    // h = v0 * v0 * sin(a) * sin(a) /(2 * g)

    // Scan input data
    puts("The object was thrown at which angle to horizon?(degrees)");
    scanf("%lf", &a);
    puts("At what speed?(in m/s)");
    scanf("%lf", &v0);

    // Convert degrees to radians

    double aRad = a * (M_PI / 180);

    // Calculating max height

    h = (v0 * v0 * sin(aRad) * sin(aRad) / (2 * g));

    printf("Max lifting height %0.3lf meters.\n ", h);
    return 0;
}