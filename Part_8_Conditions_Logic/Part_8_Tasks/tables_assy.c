/*
    This program calculates how many tables is possible to assembly using given number of legs and tabletops.
    1 table consists of 4 legs and 1 tabletop.
    by Denis Kuznetsov aka retterhalm
    10.11.2025

*/
#include <stdio.h>
#define LEG_PER_TABLE 4 // if needed we can always change legs per table ratio here

int make_set(int *legs, int *tops);
void check_warehouse(int *item, char * position);

int main()
{
    //definr variables

    int legs = 0; // for table legs
    int tops = 0; // for tabletops
    char t[] = "tops";
    char l[] = "legs";

    //user greeting
    printf("Hello! Welcome to our factory!\n\n");
    printf("Today we're going to assemble tables! Sounds fun, isn't it?\n\n");
    printf("Remember, for each table we'll need 1 tabletop and %d legs. Sounds easy, right?\n\n", LEG_PER_TABLE);
    printf("Now let's check our warehouse for the parts!\n\n");

    //call function for checking warehouse(user input)
    check_warehouse(&legs, l);
    check_warehouse(&tops, t);
    printf("Great! We have %d %s and %d %s\n\n", legs, l, tops, t );
    if(tops > 0 && legs >= LEG_PER_TABLE){
        printf("It will be enough to assemble %d table(s)! Good Job!\n\n", make_set(&legs, &tops));
    }
    else{
        printf("Ugh! Unfortunately, we don't have enough parts\n\n");
        if(tops <= 0 ){
            printf("We need at least 1 tabletop.\n");
        }
        if(legs < LEG_PER_TABLE){
             printf("We need %d more leg(s).\n\n", (LEG_PER_TABLE - legs));
        }
    }
    printf("We still have %d %s and %d %s left for tomorrow.\n\n", legs, l, tops, t);
    

    return 0;
}

void check_warehouse(int *item, char * position)
{
    printf("How many %s do we have?\n\n", position);
    scanf("%d", item);
    printf("\n");
    
}

int make_set(int *legs, int *tops)
{
    int tables = 0;

    int legs_set = *legs / LEG_PER_TABLE;
    tables = (*tops >= legs_set) ? legs_set : *tops;
    *legs -= tables * LEG_PER_TABLE;
    *tops -= tables;
    
    return tables;
}