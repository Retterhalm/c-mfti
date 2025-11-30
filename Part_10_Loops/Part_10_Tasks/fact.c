/*

    This program calculates factorial of the given number
    by Denis Kuznetsov, aka retterhalm
    22.11.2025
*/
#include <stdio.h>
int fact_n(int n);

int main()
{
    int n = 1;
    int factorial = 1;
    scanf("%d", &n);

    if(n == 0 || n == 1){
        factorial = 1;

    }else{

        factorial = fact_n(n);

    }

    printf("%d\n\n", factorial);

    return 0;
}

int fact_n(int n)
{   int res = 1;
    int i = 1;
    for(; i <= n; i ++){
        res *= i;
    }
    return res;
}

