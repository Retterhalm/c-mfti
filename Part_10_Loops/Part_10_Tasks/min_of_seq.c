/*
    This program calculates the minimum of the given sequence of n objects
    by Denis Kuznetsov, aka retterhalm
    22.11.2025
*/

#include <stdio.h>

int min(int x, int y);


int main()
{
    int n = 0; // size of the sequence
    int num = 0; // store input 
    int minimum = 0; // store minimum
    int i = 0; // for loop

    scanf("%d", &n); // user input for the size of the sequence

    for(;i < n; i++){ //until input is done
        scanf("%d", &num); // scan the next number
        if(i == 0){        //set initial value of minimum
            minimum = num;
            continue;
        }
        minimum = min(num, minimum); // check the minimum
    }

    printf("%d\n", minimum); // output the minimum
    return 0;
}

int min(int x, int y)
{
    return (x < y) ? x : y;
}