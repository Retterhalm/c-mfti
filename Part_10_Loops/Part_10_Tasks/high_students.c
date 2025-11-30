/*
    this program calculate how many students are above 170 cm
*/


#include <stdio.h>

int main()
{
    int height;
    int total = 0;
    int above_170 = 0;
    printf("Please input height of every student for comparison.\n\n");
    printf("Use space between values, end the input with any non-digit symbol\n\n");

    while((scanf("%d", &height) == 1)){
        if(height > 100 && height < 300){
            total ++;
            if(height > 170){
                above_170 ++;
            }
        }else{
            printf("Value %d is invalid, please re-enter", height);
        }
    }
    if(total == 0){
        printf("No valid height values vere entered\n\n");
        return 0;
    }
    printf("There are/is %d student(s) above 170 cm among the %d values entered.\n", above_170, total);
    return 0;
}