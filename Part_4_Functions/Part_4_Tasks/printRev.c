/*
    Reverse print of the proving 6-digits number
    by Denis Kuznetsov aka Retterhalm  
    12.10.2025
*/

#include <stdio.h>
int reverse(int num)
{
    // get the last digit

    int digit = num % 10;

    // reduce the number
    num /= 10;
    printf("%d", digit);
    return num;
}

int main()
{  
         //Declare variables
        int number;
        
        //User input
        scanf("%d", &number);

        //Function calling
        number = reverse(number);
        number = reverse(number);
        number = reverse(number);
        number = reverse(number);
        number = reverse(number);
        number = reverse(number);



    return 0;
}