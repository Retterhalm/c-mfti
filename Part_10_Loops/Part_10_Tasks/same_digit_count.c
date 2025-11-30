/*
    This program calculate how many digits  d  are in the given number num.
*/

#include <stdio.h>

int check_digit(int num, int d);
int main()
{
    //initiate variables
    int num = 0; // number
    int d = 0; // digit
    // user greet and prompt
    printf("Please enter a number and a digit to search for (e.g. 12345 4).\n\n");

    // user input
    if(2 == scanf("%d%d", &num, &d)){
        if(d < 0 || d > 9){
            printf("Error : You should input a single digit!\n");
            return 0;
        }
    //function call and output
    printf("Found %d entries of %d in number %d\n", check_digit(num, d), d, num);

    }else{
        printf("Error: Invalid input! You should enter a number followed by a digit!\n\n");

    }
    
    return 0;
}

int check_digit(int num, int d)
{
    if(num < 0 ){ // if negative

        num = -num;

    }
    int entry = 0;
    
    if(num == 0 && d == 0){
        return 1; // special case

    }
    while(num > 0){ // common case
        if( num % 10 == d){
            entry ++;
            
        }
        num /= 10;
    }
    return entry; // return number of entries
}