/*
    This program calculates the minimum of the given sequence of n objects
    by Denis Kuznetsov, aka retterhalm
    22.11.2025
*/

#include <stdio.h>

int min(int x, int y);


int main()
{
    int n = 0;
    int num = 0;
    int minimum = 0;
    int i = 0;

    scanf("%d", &n);

    for(;i < n; i++){
        scanf("%d", &num);
        minimum = min(num, minimum);
    }

    printf("%d", minimum);
    return 0;
}
