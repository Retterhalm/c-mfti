#include<stdio.h>
/*
    Fahrenheit to celsius converter.
    by Denis Kuznetsov aka Retterhalm
    12/10/2025

*/

float conv2Cel(float fahr){

    return ((fahr - 32) / 1.8);
}

int main (){

        float
            cel,
            fahr;
         
        // user input
        puts("Please input temperature in Fahrenheit\n");
        scanf("%f", &fahr);    


        // funtion call

        cel = conv2Cel(fahr);

        //output
        printf("Temperature in Celsius is %0.2f\n", cel);
        
    return 0;
}

