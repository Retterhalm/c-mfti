/*
    This program calculates yhe sum of even numbers among n numbers given

*/

#include <stdio.h>

int is_even(int num);

int main()
{
    int n = 0;
    int num = 0;
    int sum = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i ++){
        scanf("%d", &num);
        if(is_even(num)){
            sum += num;
        }
    
    }
    printf("%d\n\n", sum);
    return 0;
}

int is_even(int num)
{   if(num % 2 == 0){
        return 1;
    }
    return 0;
}