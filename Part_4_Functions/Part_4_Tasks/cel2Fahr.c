#include<stdio.h>
/*
    Celsius to fahrenheit converter.
    by Denis Kuznetsov aka Retterhalm
    12/10/2025

*/

float conv2Fahr(float cel){

    return ((cel * 1.8) + 32);
}

int main (){

        float
            cel,
            fahr;
         
        // user input
        puts("Please input temperature in Celsius\n");
        scanf("%f", &cel);    


        // funtion call

        fahr = conv2Fahr(cel);

        //output
        printf("Temperature in Fahrenheit is %0.2f\n", fahr);
        
    return 0;
}
