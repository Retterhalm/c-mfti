/* 
    Celsius to Fahrenheit converter.
    By Denis Kuznetsov aka Retterhalm
    11.10.2025

*/

#include<stdio.h>

int main(){

        float
            c, // temperature in celsius
            f; // temperature in fahrenheit
        puts("Please input temperature in Celsius\n");

        //user input
        scanf("%f", &c);

        // Calculate
        f = (c * 1.8) + 32;
        
        // Output

        printf("Temperature in Fahrenheit is %0.2f\n", f);

    return 0;
}
