#include <stdio.h>
/*
    This program counts the number of apples collected over n trees 
    by Denis Kuznetsov aka retterhalm
    09.11.2025

*/


void collect_apples(int * sum);

void crows_theft(int * sum);

int main()
{

    int trees = 0; //number of trees
    
    int sum = 0; // total of apples
    
    printf("Welcome to the apple garden! It's time to gather apples, so let\'s start!\n");
    printf("How many trees left?\n\n");
    scanf("%d", &trees);
    char count_crow;
    for( int i = 1; i <= trees; i++){
        
        printf("This is the apple tree number %d. \n\n", i);
        
        
        printf("Is it any crows on the tree? Y or N \n");

        
        scanf(" %c", &count_crow);

        if(count_crow == 'Y' || count_crow == 'y') {
            crows_theft(&sum);
            continue;
        }else{
            printf("Brilliant there are no crows! We can gather apples now\n\n");
        }

        
        collect_apples(&sum); 
        if(i < trees){
            printf("Good job! Let's move to the next one!\n\n");
        }
        
        
    }
    printf("Work is done! We have gathered %d apples!\n\n", sum);
    return 0;
}

void collect_apples(int * sum)
{

    int apples = 0; // apples by tree
    printf("How many apples have we got?\n\n");
    scanf("%d", &apples);

    *sum += apples;

    printf("There are %d apples in the basket.\n\n", *sum);
    

}

void crows_theft(int *sum)
{
    int crows = 0;
    printf("How many crows are on the apple tree?\n\n");
    scanf("%d", &crows);
    if(crows == 0){
        printf("Ah, that was a mistake! No crows on this tree!\n\n");
        collect_apples(sum);
        return;
    }
    printf("The crows have eaten all the apples from the tree!\n\n");
    printf("And now they are attacking your basket to get more!\n\n");
    printf("Each crow is going to steal one apple from your basket.\n\n");

    if(crows >= *sum){
        printf("The crows have stolen all the apples from your basket!\n");
        printf("Nothing left.\n");
        return;
    }
    *sum -= crows;
    printf("The crows have stolen %d  apples from yor basket!\n\n", crows);
    printf("There are %d apples in your basket left\n\n", *sum);
    

}