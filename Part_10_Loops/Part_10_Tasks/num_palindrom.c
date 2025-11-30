/*
    This program will check if entered number a palindrom
    by Denis Kuznetsov, aka retterhalm
    23.11.2025
*/
#include <stdio.h>
int count_digits(int num);

int main()
{   int num = 0;
    
    printf("Please enter a number\n\n");

    if (1 == scanf("%d", &num)){
        int len = count_digits(num);
        int i = 0;
        int palind = 0;
        
        for(;i < len/2 ; i++){
           palind += num % 10;
            num /= 10;
            palind *= 10;
        }
        if(len % 2 == 0){
            printf("%s\n\n", (num == palind / 10) ? "YES" : "NO"); 
        }else{
            printf("%s\n\n", (num / 10 == palind / 10) ? "YES" : "NO");
        }
        
        
    }else{
        printf("Invalid input\n\n");
    }
    return 0;
}

int count_digits(int num)
{
    int len = 0;
    while(num > 0){
        num /= 10;
        len ++;
    }
    return len;
}